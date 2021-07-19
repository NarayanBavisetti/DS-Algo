#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


//remember the ascii table
int main(){
    
// cout<<'a' -'A';

// convet all the letters in the string to capital letters
// string s1="asdFvOjvF";
// for(int i = 0 ; i < s1.size(); i++){
//     if(s1[i] >= 'a' && s1[i] <= 'z')
//     s1[i]-=32;
//     // cout<<s1[i];
// }
//  cout<<s1<<endl;

// // string s1="asdfvojvf";
// //include the header algorithm
// transform(s1.begin(),s1.end(),s1.begin(),:: tolower);
// // transform(s1.begin(),s1.end(),s1.begin(),:: toupper);
// cout<<s1;





// to print the maximum number from the given number
// string s1="0827304223498";
// sort(s1.begin(),s1.end());
// or
// sort(s1.begin(),s1.end(),less<int>());
// sort(s1.begin(),s1.end(),greater<int>());

// cout<<s1;

//print the maximum number of time the letter is repeated
string s1 = "asvnkloavnkadfnvio";
int freq[26];
for(int i = 0; i< 26; i++){
    freq[i] = 0;
}
for (int i = 0 ; i< s1.size();i++){
    freq[s1[i]- 'a']++; 
}
}