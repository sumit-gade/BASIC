/*#include<iostream>
using namespace std;

class simplecalculator {
    int a, b;
    public:
       void getdata(){
        cout<<"the value of a is "<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;
       }
       void performeoperation(){
        cout<<"the value of a + b is"<<a+b<<endl;
        cout<<"the value of a - b is"<<a-b<<endl;
        cout<<"the value of a * b is"<<a*b<<endl;
        cout<<"the value of a / b is"<<a/b<<endl;
       }
};

int main(){
    simplecalculator calc;
    calc.getdata();
    calc.performeoperation();
     return 0;
}*/

//for scientific calculator

#include<iostream>
#include<cmath>
using namespace std;

class scientificcalculator {
    int a, b;
    public:
       void getdata(){
        cout<<"the value of a is "<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;
       }
       void performeoperation(){
        cout<<"the value of sin(a) is"<<sin(a)<<endl;
        cout<<"the value of cos(b) is"<<cos(b)<<endl;
        cout<<"the value of tan(a) is"<<tan(a)<<endl;
        cout<<"the value of exp(a) is"<<exp(a)<<endl;
       }
};

/* scietific aur simple calculator me abiguity na aaye to ye krna hai  1. getdatasimple respectivlly

class hybrid: public simplecalculator , public scietificcalculator*/

int main(){

    scientificcalculator calc;
    calc.getdata();
    calc.performeoperation();


    /*hybridcalculator calc;
    calc.getdatascientific();
    calc.performeoperationscientific();*/
    
     return 0;
}
