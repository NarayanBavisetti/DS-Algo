#include <iostream>
#include <string>
#include<algorithm>
using namespace std;


//string is a part of STL 
int main(){

    //types of declaring string
// string full;
// cin>>full;
// cout<<full;

    // string full = "kucj";
    // cout<<full;

// string full(5,'n');
// cout<<full;


// string full;
// getline(cin,full);
// cout<<full;



// different functions of string
// string str;
// string s1 = "fam";
// string s2 = "ily";
// // s1.append(s2);
// // cout<<s1;
// // or
// cout<< s1+s2;

// access different characters
// string s1 = "fam";
// cout<<s1[2];


//clear a string
// string s1 = "fam";
// s1.clear();
// cout<<s1;

 

// string s1 = "abc";
// string s2 = "abc";
// cout<<s2.compare(s1);
// it return 1 in sucess -1 in fail and 0 in equal


//to check if the string is empty or not 
// string s1 = "abc";
// cout<<s1<<endl;
// s1.clear();
// if(s1.empty()){
// cout<<"string is empty"<<endl;
// }

//to remove characters from between
// string s1 = "kuchbhimatlab";
// s1.erase(3,4);
// cout<<s1;

//to find a string in between
// string s1= "theekhaivaie";
// //it returns the first index of the string
// cout<< s1.find("ek");


//to insert a string
// string s1 = "theekhaivaiee";
// cout<<s1.insert(5,"nahi");

//to find the length
// string s1 = "theekhaivaie";
// // cout<<s1.length();
// cout<<s1.size();

//to find the substring by entering position
// string s1 = "theekhaivaie";
// string sec = s1.substr(5,3);
// cout<<sec;

//convet string to integer
// string s1 = "786";
// int x = stoi(s1);
// cout<<x + 10<<endl;


//convert integer to string 
// int x = 786;
// cout<< to_string(x) + "2";

//sort a string
//include header algorithm
// string s1="nacweomxeui";
// sort(s1.begin(),s1.end());
// cout<<s1<<endl;



    //     string full = "kucj";
    // full[0] = 'T';
    // cout<<full;
}