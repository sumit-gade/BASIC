/* 
derived class syntax----------
class {{derived-class-name}} : {{visibilty-mode}} {{base-class}}
{
    class members/methods/etc..
}
*/






#include<iostream> 
using namespace std;

class Employee
{
    public:
      int id;
      float salary;
      Employee(int inpId)
      {
        id = inpId;
        salary = 34.0;


      }
}


int main(){
    
     return 0;
}