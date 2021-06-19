#include<iostream>
using namespace std;

int main(){




// how to reverse  a number
// int n;
// cin>>n;
// for(int i = 0; i< n.length; i++){

//     a= n/10;
//     c= c+ a;
// b = n%10
// }






//armstrong of a number
int n;
cin>>n;

int number = 0;
while(n>0){
    int  a = n%10;
  number = number + a*a*a ;
     n = n/10;
}
cout<<number;


    return 0;
}