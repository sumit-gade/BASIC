#include <iostream>
using namespace std;
class Complex
{
    int a , b;
    // individuallu declaring functions as freinds
    /*friend int Calculator ::sumRealComplex(Complex,Complex);
    friend int Calcualtor ::sumCompComplex(Complex,Complex);*/

    // aliter - declaring the entire calculator class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;a
    }
    void printNumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex 01, Compelx o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "the sum of complex part of o1 and o2 is " << resc << endl;

    return 0;
}