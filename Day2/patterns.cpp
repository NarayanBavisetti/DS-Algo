#include <iostream>
using namespace std;

int main(){
// for(int i = 0; i< 5;i++){
//     for(int j = 0;j<=5;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }


// for(int i = 0; i< 5;i++){
//     for(int j = 0;j<i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }


// for(int i = 0; i< 5;i++){
//     for(int j = 0;j< 5-i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// for(int i = 0; i< 5;i++){
//     for(int j = 0;j< 5;j++){
//         if( j <= i){
//         cout<<" ";
//         }else{
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }


for(int i = 0; i< 5;i++){
    for(int j = 0;j< 5;j++){
        if( j >= i){
        cout<<" ";
        }else{
            cout<<"*";
        }
    }
    cout<<endl;
}
}