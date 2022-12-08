#include<iostream>
using namespace std;

//destrcutor never takes an argument nod does it return any value

int count=0; //global variable count is initialized

class num{
    public:
      num(){
        count++;
        cout<<"this is the time when constructor is caalled for object number"<<count<<endl;

      }
      ~num(){
        cout<<"this is the time when dictructor is called for object number"<<count<<endl;
        count--;
      }

};

int main(){
    cout<<"we are inside our main fucntion"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;   
     {
        cout<<"entering this block"<<endl;
        cout<<"creating two more object"<<endl;
        num n2, n3;
        cout<<"existing the block"<<endl;
    }
    cout<<"back to main "<<endl;
    return 0;
}

