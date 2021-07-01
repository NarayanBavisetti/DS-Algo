#include <iostream>
using namespace std;

// binary search
int binarySearch(int a[], int n, int key)
{
    int s = 0;
    int e = n;
    int mid = s+e/2;
    if (a[mid] == key)
    {
        return n / 2;
    }
    else if (a[mid] > key)
    {
        return s = mid + 1;
    }
    else
    {
        return e = mid - 1;
    }
}
int main()
{
    int n, a[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    cout << binarySearch(a, n, key);
}