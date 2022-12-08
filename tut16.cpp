      //call by value
/*#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp= a;
    a=b;
    b = temp;
}



int main(){
    int x=4, y=5;
    cout<<"the value of x is"<<x<<"and the value of y is"<<y<<endl;
    swap(x,y);
    cout<<"the value of x is"<<y<<"and the value of y is"<<x<<endl;

     return 0;
}*/
       //call by refrence using pointers

/*#include<iostream>
using namespace std;

void swapPointer(int*a , int*b){
    int temp = *a;
    *a=*b;
    *b= temp;

}

int main(){
    int x=4, y=5;
    cout<<"the value of x is"<<x<<"and the value of y is "<<y<<endl;
    swapPointer(&x,&y); //this will swap a and b using pointer refrence 
    cout<<"the value of x is "<<x<<"and the value of y is"<<y<<endl;

    
     return 0;
}*/

//       call by refrence 
#include<iostream>
using namespace std;

void swapRefrenceVar(int &a,int &b){
    int temp =a;
    a =b;
    b = temp;


}

int main(){
    int x=4,y=5;
    cout<<"the value of x is "<<x<<"and the value of yis"<<y<<endl;
    swapRefrenceVar(x,y); //this will swap a and b using refrence variables
    cout<<"the value of x is"<<x<<"and the value of y is "<<y<<endl;

    
     return 0;
}
