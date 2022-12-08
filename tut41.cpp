// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };
#include<iostream> // nhi likheag to cout ws not decalred in scope ayega ERROR
using namespace std;

class Base1{
    protected:
      int base1int;

    public:
        void set_base1int(int a)
      {
        base1int = a;
      }    
      
};
class Base2{
    protected:
      int base2int;

    public:
        void set_base2int(int a)
      {
        base2int = a;
      }    
      
};
class Base3{
    protected:
      int base3int;

    public:
        void set_base3int(int a)
      {
        base3int = a;
      }    
      
};

class Derived: public Base1, public Base2,public Base3
{
  public:
   void show(){
    cout<<"the value of base 1 is "<<base1int<<endl;
    cout<<"the value of base 2 is "<<base2int<<endl;
    cout<<"the value of base 3 is "<<base3int<<endl;
    cout<< "The sum od these value is"<<base3int + base1int + base2int<<endl;
  }
};

int main()
{
  Derived sumit;
  sumit.set_base1int(25);
  sumit.set_base2int(4);
  sumit.set_base3int(16);

  return 0;
}


/////////////ERROR AAARAA  BAD ME CHECK KRRR////////////////////