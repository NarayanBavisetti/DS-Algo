// simple binary search to find k from an array

// #include <iostream>
// using namespace std;
// int binarysearch(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n;

//     while (s <= e)
//     {
//         int mid = (s + e) / 2;
//         if (key == arr[mid])
//         {
//             return mid;
//         }
//        else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else  {
//             e = mid - 1;
//         }

//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int key;
//     cin >> key;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[n];
//     }
//     int num = binarysearch(arr, n, key);
//     cout << num;
//     return 0;
// }

// 