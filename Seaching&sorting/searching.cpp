// simple binary search to find k from an array

#include <iostream>
using namespace std;
// int binarySearch(int arr[], int N, int key)
// {
//     int s = 0;
//     int e = N;
//     while (s <= e)
//     {
//         int mid = (s + e) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int N;
//     cin >> N;
//     int key;
//     cin >> key;
//     int arr[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << binarySearch(arr, N, key);
// }

//selection sort

// int main(){
//     int arr[6] = {3,5,20,2,22,9};
//     for(int i = 0 ; i < 6 ; i++){
// for(int  j = i+1; j < 6 ; j++){
//     if(arr[i] > arr[j]){
//         int swap = arr[j];
//         arr[j] = arr[i];
//         arr[i] = swap;
//     }
// }
//     }
//     for(int i = 0 ; i < 6 ; i ++){
// cout<<arr[i];
//     }
// }

//bubble sort
// int main()
// {
//     int n = 5;
//     // int ar[n];
//     int ar[n] = {1, 55, 6, 99,7};
//     // for(int i = 0 ; i< 5 ; i++){
//     //     cin>>ar[i];
//     // }
//     int counter= 0;
//     while (counter<n)
//     {
//         for (int i = 0; i < n-counter; i++)
//         {
//             if (ar[i] > ar[i + 1])
//             {
//                 int swap = ar[i + 1];
//                 ar[i + 1] = ar[i];
//                 ar[i] = swap;
//             }
//         }
//         counter++;
//     }
//     for(int i = 0 ; i < n ; i++){
//         cout<<ar[i]<<" ";
//     }
// }

//insertion sort
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 1; i < n; i++)
//     {
//         int current = arr[i];
//         int j = i - 1;
//         while (arr[j] > current && j > 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = current;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

//output the sum of all the subarrays
