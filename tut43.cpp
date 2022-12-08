#include<iostream>
using namespace std;

class Base1{
    public:
       void greet(){
        cout<<"how are you"<<endl;

       }
};
class base2{
    public:
    void greet(){
        cout<<"kaise ho ?"<<endl;

    }
};

class Derived : public Base1 , public base2{
    int a;
    public:
       void greet(){
        base2::greet(); //base 2 chahiye to 
       }
};
int main(){
    // ambiguity1
    Base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();
    
     return 0;
}