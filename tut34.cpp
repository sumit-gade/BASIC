//copy constructor
//A copy constructor is a type of constructor that creates a copy of another object

#include<iostream>
using namespace std;
class Number{
    int a;
    public:
    Number(){
        a = 0;
    }
    Number(int num){
        a = num;

    }
  
  //when no copy constructor is found, compiler supplies its own copy constructor
  Number(Number & obj){
    cout<<"copy constructor called!!!"<<endl;
    a = obj.a;
  }
};

int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); //Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y


    
     return 0;
}