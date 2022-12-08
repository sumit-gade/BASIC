// there are two tupes of header files:
// 1. system header files: its comes with the compiler
#include<iostream>
//2. user defined header files : it is written by the programmer
// #inlcude "this.h" //--> this will produce error if this.h is not present in the curerent directory

using namespace std;

int main(){
int a=4,b=5;
cout<<"operators in c++:"<<endl;
cout<<"following are the types of operators in c++"<<endl;

//arithmetic operators
cout<<"the value of a+b is "<<a+b<<endl;
cout<<"the value of a-b is "<<a-b<<endl;
cout<<"the value of a*b is "<<a*b<<endl;
cout<<"the value of a/b is "<<a/b<<endl;
cout<<"the value of a%b is "<<a%b<<endl;
cout<<"the value of a++ is "<<a++<<endl;
cout<<"the value of a-- is "<<a--<<endl;
cout<<"the value of ++a is "<<++a<<endl;
cout<<"the value of --a is "<<--a<<endl;
cout<<endl;

//assignmnet operators--> used to assign values to variables
// int  a=3,b=9;
// char d='d';

//comparison operators
cout<<"following are the comparison operators in c++"<<endl;
cout<< "the value of a==b is" <<(a==b)<<endl;
cout<< "the value of a!=b is" <<(a!=b)<<endl;
cout<< "the value of a>=b is" <<(a>=b)<<endl;
cout<< "the value of a<=b is" <<(a<=b)<<endl;
cout<< "the value of a>b is" <<(a>b)<<endl;
cout<< "the value of a<b is" <<(a<b)<<endl;

//logical operators
cout<<"the following are the logical operators in c++"<<endl;
cout<<"the value of this logical and operator((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
cout<<"the value of this logical or operator((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
cout<<"the value of this logical not operator(!(a==b)) is:"<<(!(a==b))<<endl;


return 0;

}
