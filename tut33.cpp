//dynamic initialization of objects using constructors

/*#include <iostream>
using namespace std;

class bankDeposit
{ // contain private data members
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    bankDeposit() {}
    bankDeposit(int p, int y, float r); // r can be value like 0.04
    bankDeposit(int p, int y, int r);   // r can be avalue like 14
    void show();
};
bankDeposit ::bankDeposit(int p, int y, float r) // here bankdeposit is constructor
{
    principal = p; // principal years and all this are data members
    years = y;     // p , r , y  all this are parameters
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

bankDeposit ::bankDeposit(int p, int y, int r) // here bankdeposit is constructor
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
    void bankDeposit ::show()
    { // show is function which will print the value of data members
        cout << endl
             << "principal amount was " << principal
             << ".return value after" << years
             << "year is" << returnValue << endl;
    }

    int main()
    {
        bankDeposit bd1, bd2, bd3; // bd1,bd2 are objects of data type bankdeposite
        int p, y;
        float r;
        int R;

        cout << "enter the value of p , y and r" << endl;
        cin >> p >> y >> r;
        bd2 = bankDeposit(p, y, r);
        bd2.show();
    }
}*/

#include<iostream>
using namespace std;


class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit(){}
        BankDeposit(int p, int y, float r); // r can be a value like 0.04
        BankDeposit(int p, int y, int r); // r can be a value like 14
        void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

void BankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnValue<<endl;
}

int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}
