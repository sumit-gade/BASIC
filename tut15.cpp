     //function
#include<iostream>
using namespace std;

int sum(int, int );
void g();


int main(){
    int num1, num2;
    cout<<"entre the first number"<<endl;
    cin>>num1;
    cout<<"entre the second number"<<endl;
    cin>>num2;
    cout<<"the sum is " << sum (num1 , num2);
    
     return 0;
}
int sum(int a , int b ){

    int c= a+b;
    return c;
}
void g(){
    cout<<"\nhello , goodmorning";

}