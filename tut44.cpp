// virtual base

#include<iostream>
using namespace std;

class A {
    public :
       void say(){
        cout<<"hello world"<<endl;

       }
};

class B : public virtual A{

};
class C : public virtual A{

};
class D : public B , public C{

};
int main(){
    
     return 0;
}