//example 2 virtual class

#include<iostream>
using namespace std;

class student{
    protected:
       int roll_no;
    public:
       void set_number(int a){
        roll_no = a;
       }
       void print_number(void){
        cout<<"your roll no is"<<roll_no<<endl;
       }
};
class Test : public student{
    protected :
       float maths; physcis;
       publci:
       void  set_marks(float m1, float m2){
        maths = m1;
        physcis = m2;
       }

       void print_marks(void){
        cout<<"your result is here:"<<endl;
            <<"maths:" <<maths<<endl;
            <<"physics:"<<physics<<endl;
       }
};

class sports: public student{
    protected:
      float score;
    public:
    void set_score(float sc){
        score = sc;
    }  
     void print_score(void){
        cotu<<"your pt score is"<<score<<endl;

     }
};
class result : public Test 
int main(){
    
     return 0;
}