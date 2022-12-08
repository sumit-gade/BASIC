//exercise

#include<iostream>
using namespace std;

class simple
{
    protected:
      int x1,y1;
    public:
      void  process()
      {
        cout<<"the addition is"<<x1 + y1<<endl;
        cout<<"the substraction is"<<x1 - y1<<endl;
        cout<<"the multiplication is"<<x1 * y1<<endl;
        cout<<"the division is"<<x1 / y1<<endl;
      }
      void set(int a,int b)
      {
        x1=a;
        y1=b;
      }
      
};

class scientific
{
 protected:
    int x2,y2;
 public:
    void process()
    {
        cout<<"the sqaure root of x is"<<sqrt(x2)<<endl;
        cout<<"the sqaure root of y is"<<sqrt(y2)<<endl;
        cout<<"the cube root of x is"<<cbrt(x2)<<endl;
        cout<<"the cube root of y is"<<cbrt(y2)<<endl;
    }
    void set(int a, int b)
    {
        x2=a;
        y2=b;
    }

};

class hybrid:public simple, public scientific
{
    public:
      void masterset(int a, int b)
    {
        simple::set(a,b);
        scientific::set(a,b);
        simple::process();
        scientific::process();
    }  
};
int main(){
    int p,q;
    hybrid h;
    cout<<"enter two values"<<endl;
    cin>>p>>q;

    h.masterset(p,q);
     return 0;
}