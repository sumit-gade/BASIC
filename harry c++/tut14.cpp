   //structure

/*#include<iostream>
using namespace std;

int main() {
    struct employee
    {
        int eId;
        char favchar;
        float salary;



    };
    struct employee harry;
    harry .eId = 1;
    harry .favchar= 'c';
    harry .salary = 1200000;
    cout<<"the value is"<<harry .eId<<endl;
    cout<<"the value is"<<harry .favchar<<endl;
    cout<<"the value is"<<harry .salary<<endl;

     return 0;
}*/


       //union

/*#include<iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;


};


int main(){
    union money m1;
    m1.rice=34;
    cout<<m1.rice;
    
     return 0;
}*/
      
          //enums
      #include<iostream>
      using namespace std;
      
      int main(){
        enum meal{breakfast,lunch,dinner};
        meal m1=lunch;
        cout<<(m1==0);
         return 0;
      }