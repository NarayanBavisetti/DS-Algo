#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

// bool checkPrime(int n)
// {

//     for (int i = 2; i <=sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }

//         return true;

// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     for (int i = a; i <= b; i++)
//     {
//         if (checkPrime(a))
//         {
//             cout << a;
//         }
//     }
//     return 0;

// }

// reverse a number
// int main(){
//     int a;
//     cin>>a;
//     int next = 0;
//     while(a> 0){
//         int num = a%10;
//          next = next*10 + num;
//          int a= a/10;
//     }
//     cout<<a;
// }

//factorial of a number

// int fac(int n){
//     int num = 1;
//     while(n>0){
//          num = num*n;
//           n = n -1;
//     }
//     return num;
// }

// int main(){
//     int n;
//     cin>>n;
//    cout<< fac(n);
// }

//check if a triplet is a pythagorean triplet or not
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     int max,sec,thi;
//     if (a > b)
//     {
//         if (a > c)
//         {
//              max = a;
//              sec = b;
//              thi = c;
//         }
//         else
//         {
//              max = c;
//              sec = b;
//              thi = a;
//         }
//     }
//     else
//     {
//         if (b > c)
//         {
//              max = b;
//              sec = a;
//              thi = c;
//         }
//         else
//         {
//              max = c;
//              sec = a;
//              thi = b;
//         }
//     }
//      max= max*max;
//     int sum = sec*sec + thi*thi;
//     if(sum == max){
//         cout<<"its an pythagorian triplet";
//     }else{
//         cout<<"its not";
//     }
// }

//implement binary search
// int main(){
//     int n,key;
//     cin>>n;
//     cin>>key;
//     int a[n];
//     for(int i = 0 ; i< n; i++){
//         cin>>a[i];
//     }

// }

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

//find the smallest kth element in the array
int main()
{
    int n, k;
    int num = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        int max = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > max)
            {
                num = j;
                max = arr[j];
            }
        }
        if (i < k - 1)
        {
            arr[num] = 0;
        }
        if (i = k - 1)
        {
            cout << max;
        }
    }
}