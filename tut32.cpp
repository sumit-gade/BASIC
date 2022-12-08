// constructor with default arguments

#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b= 9, int c= 8)
    { // 9 and 8 are default values for b and c
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printdata();
};

void simple ::printdata()
{
    cout << "the value of data1, data2 and data3 is" << data1 << "," << data2 << " and " << data3 << endl;
}

int main()
{
    simple s(12, 13); // the value of the parameter “c” will be automatically set by the default value.
    s.printdata();
    return 0;
}

/*the value “12”, “13”, and “8” are printed.
 The constructor assigned the values “12” and “13” to the variables “a” and “b”
 but the value for the variable “c” was not passed that’s why constructors
  set the value “8” which was the default value for the variable “c”.*/