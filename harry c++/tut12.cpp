#include<iostream>
using namespace std;

int main(){
    //what is pointer? --> data types which hold the adresss of other data types
    int a=3;
    int* b;
    b=&a;
    // &--> (adress of) operator
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is"<<b<<endl;

    //*--> (value at) dereference operator
    cout<<"the value at adress b is" <<*b<<endl;

    //pointer to pointer
    int** c =&b;
    cout<<"the adress of b is"<<&b<<endl;
    cout<<"the adress of b is"<<c<<endl;

    cout<<"the value at address c is"<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;



     return 0;
}