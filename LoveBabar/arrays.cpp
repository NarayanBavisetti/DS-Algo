#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

//reverse an array
// int main()
// {
//     int n;
//     int i;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int j = 0; j < n / 2; j++)
//     {
//         int sum = arr[n - j - 1];
//         arr[n - j - 1] = arr[j];
//         arr[j] = sum;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
// }

//maximum and min elemnt in an array
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0 ;i < n ;i ++){
//         cin>>arr[i];
//     }
//     int max = INT_MIN;
//     int min = INT_MAX;
//     for(int i = 0 ; i< n ; i++){

//         if(arr[i] > max){
//             max = arr[i];
//         }
//      if(arr[i] < min){
//             min = arr[i];
//         }else{
//             continue;
//         }
//     }
//     cout<<max<<endl<<min;
// }

//find the min kth element in the array
// int main()
// {
//     int n, k;
//     int num = 0;
//     cin >> n >> k;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < k; i++)
//     {
//         int max = INT_MIN;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] > max)
//             {
//                 num = j;

//             }
//         }
//         if (i < k - 1)
//         {
//             arr[num] = 0;
//         }
//         if (i = k - 1)
//         {
//             cout << arr[num];
//         }
//     }
// }

//sort the numbers 0 ,2,1
// int main()
// {

//     int arr[3];
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> arr[i];
//     }
//     int max = INT_MIN;
//     int num;
//     for (int i = 0; i < 3; i++)
//     {
//         if (arr[i] > max)
//         {
//             num = i;
//             max = arr[i];
//         }
//     }
//     int ar = arr[num];
//     arr[num] = arr[2];
//     arr[2] = ar;
//     if (arr[0] > arr[1])
//     {
//         int one = arr[0];
//         arr[0] = arr[1];
//         arr[1] = one;
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr[i];
//     }
// }