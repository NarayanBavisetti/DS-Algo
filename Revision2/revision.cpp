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

