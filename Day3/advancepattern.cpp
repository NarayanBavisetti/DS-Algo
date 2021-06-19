#include <iostream>
using namespace std;

int main()
{

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int b = 0;
    //     for (int j = 0; j < n-i; j++)
    //     {
    //           b = b + 1;
    //             cout << b;
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int b = 0;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         b = b + 1;
    //         cout << b;
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // int b = 0;
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j <= i; j++)
    //     {
    //         b = b + 1;
    //         cout << b;
    //     }
    //     cout << endl;
    // }

    //     int n;
    //     cin >> n;
    //     int b = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //    b = b + 1;
    //         for (int j = 0; j <= i; j++)
    //         {

    //             cout << b;
    //         }
    //         cout << endl;
    //     }

    // int n;
    // cin >> n;
    // int b = 1;
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j <= i; j++)
    //     {

    //         cout << b;
    //         if(b == 0){
    //             b = 1;
    //         }else{
    //             b= 0;
    //         }
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2 * n - i; j++)
    //     {
    //         if (j < n-i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout<<endl;
    // }


    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " " ;
        }
        cout << endl;
    }
}
