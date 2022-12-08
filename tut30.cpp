//parameterized and default cinstructors


#include<iostream>
using namespace std;

class complex 
{
    int a, b;

public:
complex(int, int); // constructor declaration

void printnumber()
{
    cout<<"your number is " << a << "+" <<b<< "i"<<endl;

}

};
complex ::complex(int x, int y) //this is parameterized constrcutor as it takes 2 parameters
{
    a = x;

    b = y;

}
int main(){
    //implict call
    complex a(4,6);
    a.printnumber();

    //explict call
    complex b = complex(5,7);
    b.printnumber();
    
    
     return 0;
}