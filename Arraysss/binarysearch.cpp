#include <iostream>
using namespace std;

int bina(int a[], int n, int key)
{
    int s = 0;
    int e = n;
    int mid = s + e / 2;
    while (s == e)
    {
        for(int i = s ;  i< e; i++)
        if (mid == key)
        {
            return mid;
        }
        else if (key > mid)
        {
            s = mid + 1;
        }
        else if (key < mid)
        {
            e = mid - 1;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int key = 32;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bina(a, n, key);
}