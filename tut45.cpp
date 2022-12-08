/*#include<iostream>
using namespace std;

class student{
    protected:
       int roll_no;
    public:
       void set_number(int a){
        roll_no = a;

       }   
       void print_number(void){

        cout<<"your roll no is "<<roll_no<<endl;

       }
};

class Test :public student{
    protected:
       float maths, physics;  // do bar float nhi likhte
    public:
    void set_marks(float m1, float m2){
         maths= m1;
         physics = m2;  
    } 

    void print_marks(void){
        cout<<"your result is here:"<<endl;
            <<"maths:"<<maths<<endl;
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
              cout<<"your pt score is "<<score<<endl;
           }  


    };

    class Result: public Test , public sports{
        private:
           float total;
           public:
           void display(void){
               total= maths + physics + score;
               print_number();
               print_marks();
               print_score();
               cout<<"your total score is"<<total<<endl;
           }
    };

int main(){

    Result sumit;
    sumit.set_number(4200);
    sumit.set_marks(78.9,99.5);
    sumit.set_score(9);
    sumit.display();
     return 0;
}*/

#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no; 
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is "<< roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
        public:
            void set_marks(float m1, float m2){
                maths = m1;
                physics = m2;
            }

            void print_marks(void){
                cout << "You result is here: "<<endl
                     << "Maths: "<< maths<<endl
                     << "Physics: "<< physics<<endl;
            }
};

class Sports: virtual public Student{ // virtual base class likhne se abiguity se bacha ja skta hai
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }

};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<< "Your total score is: "<<total<<endl;
        }
};

int main(){
    Result harry;
    harry.set_number(4200);
    harry.set_marks(78.9, 99.5);
    harry.set_score(9);
    harry.display();
    return 0;
}
