//friend fucnton  simple example
#include <iostream>
using namespace std;

class Y; // FORWARD DECLARATION

class X
{
    int data;

public:
    void setvalue(int Value)
    {
        data = Value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "summing data of X and Y object gives me" << o1.data + o2.num;
}

int main(){
    {
        X a1;
        a1.setvalue(3);

        Y b1;
        b1.setValue(15);

        add(a1, b1);

    }
 return 0;
}