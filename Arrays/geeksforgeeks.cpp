//top 50 questions in geek for geeks

#include <iostream>
#include <climits>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int x, k;
//     int sa = 0;
//     int counter = 0;
//     cin >> x;
//     cin >> k;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n / k; i++)
//     {
//         for (int j = sa; j < sa + k; j++)
//         {
//             if (arr[j] == x)
//             {
//                 counter++;
//                 sa = k;
//                 break;
//             }
//         }
//     }
//     if(counter == n / k){
//         cout<<"Yes";
//     }else{
//         cout<<"No";
//     }
// }

// int main()
// {
//     int arr[9] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = i+1; j < 9; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int swap = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = swap;
//             }
//         }
//     }
//     for (int i = 0; i < 9; i++)
//     {
//         cout << arr[i];
//     }
// }

// int main(){
//     int arr[6] = {7, 10, 4, 3, 20, 15} ;
//     int k = 4;
//     int mx = INT_MIN;
//     int num = 0;
//     int counter = 0;
//     for(int i = 0 ; i < k ; i++){
//         for(int  j = 0 ; j < 6 ; j++){
//              if(mx < arr[i]){
//                  mx = arr[i];
//                  num = i;
//              }
//         }
//         counter++;
//         if( k == counter ){
// cout<<mx;
//         }else{
//             arr[num] = INT_MIN;
//         }
//     }
// }

// int main(){
//    int a[5] = {0, 5, 5, 5, 4};
//    int x = 5;
//    int counter = 0;
//    for(int i = 0 ; i < 5 ; i ++){
//        if(a[i] == x){
//            counter++;
//        }
//    }
//    cout<<counter;
// }

// int main(){
//    int arr[7] = {15, 16, 10, 9, 6, 7, 17};

// int mx  = INT_MIN;
// int mn = INT_MAX;
// for(int i = 0 ; i < 7 ; i ++ ){
//     int mx = max(mx,arr[i]);
//     // int mn = min(mn,arr[i]);
// }
// int up = mx + mn;
// int down = mx - mn;
// double value = down/up;
// cout<<mx << " "<<mn<<endl;
// cout<<down<<" "<<value;
// }

// Q11
// void rotate(int arr[], int n)
// {
//     int sum = arr[n-1];
//     for(int i = 0; i<n ; i++){
//          int swap = arr[i];
//          arr[i] = sum;
//          sum = swap;
// }

//generating subarrays
// int main()

// {

//     int arr[4] = {3, 6, 8, 1};
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = i; j < 4; j++)
//         {
//             cout << "[";
//             for (int k = i; k <= j; k++)
//             {
//                 cout << arr[k] << " ";

//             }

//             cout << "]" << endl;
//         }
//     }
// }

//maximum sub array sum
// int main()

// {
//     int max = INT_MIN;
//     int arr[9] = {-4,1,3,-2,6,2,-1,4,-7};
//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = i; j < 9; j++)
//         {
//            int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum = sum + arr[k];
//             }
//             if(sum > max){
//                 max = sum;
//             }
//         }
//     }
//     cout<<max;
// }

//maximum sum subarray using cummulative sum
// int main()

// {
//     int n;
//     cin >> n;
//     int max = INT_MIN;
//     int arr[1000];
//     int cumSum[1000] = {0};
//     cin >> arr[0];
//     cumSum[0] = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         cin >> arr[i];
//         cumSum[i] = cumSum[i - 1] + arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             sum = cumSum[j] - cumSum[i - 1];
//             if (sum > max)
//             {
//                 max = sum;
//             }
//         }
//     }
//     cout << max;
// }

// maximum sum subarray using kadens algorithm
// int main()

// {
//     int n;
//     cin >> n;
//     int cs= 0;
//     int mx = INT_MIN;
//     int arr[1000];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// for(int i = 0 ; i < n ; i ++){
//     cs += arr[i];
//     if(cs < 0){
//         cs = 0;
//     }
//     mx = max(cs,mx);
// }
//     cout << mx;
// }


//
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0 ; i < n ; i ++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i ++){
        if(i != 0 && 9-arr[i] < arr[i] ){
            arr[i] = 9-arr[i];
        }
        if(i == 0&& 9-arr[i] != 0 &&9-arr[i] < arr[i] ){
            arr[i] = 9-arr[i];
        }
    }
    for(int  i = 0 ; i < n ; i++){
        cout<<arr[i];
    }
}