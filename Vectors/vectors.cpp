#include <iostream>
#include <vector>
#include <string>
using namespace std;

// int main()
// {
// vector<int> arr;

//   vector<int> arr = {1,2,3,4};

// arr.pop_back();

//   arr.push_back(1);

//   for(int i = 0; i< arr.size() ; i++){
//       cout<<arr[i]<<endl;
//   }
// //size of the vector
// cout<<arr.size()<<endl;

// //capacity of the vector
// cout<<arr.capacity();

//fill constructor
// vector<int> arr(10,0);
//   for(int i = 0; i< arr.size() ; i++){
//       cout<<arr[i]<<endl;
//   }
// for(int x : arr){
//     cout<<x<<" ,";
// }

// 2d vector
// vector<vector<int>> arr = {{1, 2, 3},
//                            {4, 3, 6},
//                            {2, 8, 4},
//                            {3, 9, 6, 2, 1}};

// for (int i = 0; i < arr.size(); i++)
// {
//     for (int x : arr[i])
//     {
//         cout << x + 1 << ", ";
//     }
//     cout<<endl;
// }
// vector<string> fizzbuzz(int n)
// {
//     vector<string> str;

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 3 == 0 && i % 5 == 0)
//         {
//             str.push_back("FizzBuzz");
//         }

//         else if (i % 5 == 0)
//         {
//             str.push_back("Buzz");
//         }
//         else if (i % 3 == 0)
//         {
//             str.push_back("Fizz");
//         }

//         else
//         {
//             str.push_back(to_string(i));
//         }
//     }
//     return str;
// }
// int main()
// {
//     vector<string> output = fizzbuzz(15);
//     for (string x : output)
//     {
//         cout << x << " ,";
//     }
// }

// int main()
// {
//     int N;
//     cin >> N;
//     int S;
//     cin >> S;
//     int array[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> array[i];
//     }
//     for (int i = 0; i < N; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < N; j++)
//         {
//             if (i != j)
//             {
//                 sum = array[i] + array[j];
//                 if (sum == S)
//                 {
//                    cout<< array[i]<<" " <<array[j]<<endl;
//                 }
//             }
//         }
//     }
   
// }