#include<iostream>
using namespace std;
class A{
    int a;//isse farak nhi padhta hai
    public:
       A & setdata(int a){
        this->a=a; //priority local variables ko di jati hai
        return *this; //reutrn aur ampersand lagane se .getdata krke likh skte hai set data ke baju me 
       }
       void getdata(){
        cout<<"the value of a is "<<a<<endl;


       }
};

int main(){
    //this is a keyboard which is apointer which points to the object which invokes the member function
    A a;
    a.setdata(4).getdata();
    a.getdata();
    
     return 0;
}