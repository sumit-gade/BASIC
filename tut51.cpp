/*#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
       void getData(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;

       }
       void setData(int a, int b){
        real = a;
        imaginary= b;


       }
};

int main(){
    complex c1;
    c1.getData(1,54);
    c1.setData();
    
     return 0;
}*/

#include<iostream>
#include <complex>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr = new Complex;
    (*ptr).setData(1, 54); // ptr->setData(1, 54);
    (*ptr).getData(); //ptr->getData(); 

    //ARRAY OF OBJECTS
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1,4);
    ptr1->getData();

    return 0;
}
