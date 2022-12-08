/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}*/

#include<iostream>
using namespace std;

class test{
    int a;
    int b;
    public:
      // test (int i , int j): a(i) , b(j)   yes
      // test (int i , int j): a(i), b(i+j)  yes
      // test (int i , int j): a(i), b(2*j)  yes
      // test (int i , int j): a(i), b(a+j)  yes
      //  test (int i , int j): b(j), a(i+b) *********************** 
       test (int i , int j): a(i)  

      


       {
        b=j;  // a or b ko bhi likh skte hai ***
        cout<<"constructor executed"<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;

       }


};

 
int main(){
    test t(4,6);
    
     return 0;
}

