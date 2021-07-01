// date 21-06-21

#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

// print prime number between a and b using shortest way and use functions

// bool isPrime(int n)
// {
//     for (int i = 2; i < sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     for (int i = a; i < b; i++)
//     {
//         if (isPrime(i))
//         {
//             cout << i << " is a prime number" << endl;
//         }
//         else
//         {
//             continue;
//         }
//     }
// }

// print min and max in the array and use functions
// int max( int n,int a[100])
// {
//     int maaxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] >= maaxi)
//         {
//             maaxi = a[i];
//         }
//     }
//     return maaxi;
// }

// int main()
// {
//     int n, a[100];
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int ans = max( n,a[100]);
//     cout << ans;
// }

// print the fibonacci serires
// int main() {
// int n;
// cin>>n;
// int a =0;
// int b = 1;
// int c = 0;
// int d = 0;
// for(int i = 0; i< n-2 ;i ++){
//     c = a+ b;
//     d = d+a + b +c;
//    a = b;
//    b = c;

// }
// cout<<c;
// }

//print factorial of the number
// int factorial(int n)
// {
//     int sum = 1;
// for(int i = 2 ;i <=n ; i++){
//      sum = sum*i;
// }

//     return sum;
// }
// int main()
// {
//     int a;
//     cin >> a;
//     int ans = factorial(a);
//     cout << ans;
// }

//find the binary coefficient

// int factorial(int n)
// {
//     int sum = 1;
// for(int i = 2 ;i <=n ; i++){
//      sum = sum*i;
// }

//     return sum;
// }
// int main()
// {
//     int a,b;
//     cin >> a>>b;
//     int ans = factorial(a);
//     int bas = factorial(b);
//     int c = b-a;
//     int das = factorial(c);

//     int tutu = ans / (bas*das);
//     cout<<tutu;
// }

//pascals triangle
// int factorial(int n)
// {
//     int sum = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         sum = sum * i;
//     }

//     return sum;
// }
// int main()
// {
//     int a;
//     cin >> a;
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << factorial(i) / (factorial(i - j) * factorial(j));
//         }
//     }
// }


//arrange the array in decreasing order
int main(){


    int n,a[100];
    cin>>n;
    int sum = 0;
    for(int i = 0; i< n ;i++){
        cin>>a[i];
    }
    for(int i = 0; i< n ;i ++){
        if(a[i+1]>a[i]){
            sum = a[i+1];
            a[i+1] = a[i];
            a[ i] = sum;
        }
    }  
      for(int i = 0; i< n ;i++){
        cout<<a[i];
    }

}