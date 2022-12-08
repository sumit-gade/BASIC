     //inline fucntion
 
 /*#include<iostream>
using namespace std;


inline int product(int a ,int b){
    return a*b;
}

int main(){
    int a , b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is"<<product (a,b)<<endl;
    cout<<"the product of a and b is"<<product (a,b)<<endl;
    cout<<"the product of a and b is"<<product (a,b)<<endl;
    cout<<"the product of a and b is"<<product (a,b)<<endl;
    cout<<"the product of a and b is"<<product (a,b)<<endl;
    cout<<"the product of a and b is"<<product (a,b)<<endl;
    cout<<"the product of a and b is"<<product (a,b)<<endl;
    cout<<"the product of a and b is"<<product (a,b)<<endl;
   return 0;
}
*/
      //default arguments

      #include<iostream>
      using namespace std;

      float moneyRecieved(int currentMoney , float factor =1.04){
        return currentMoney*factor;
      }
      
      int main(){
        int money=100000;
        cout<<"if you have "<<money<< "Rs in your bank account,you will recieve"<<moneyRecieved(money)<<"Rs after one year"<<endl;
        cout<<"for VIP: if you have "<<money<<"Rs in your bank account,you will recieve "<<moneyRecieved(money,1.1)<<"Rs after one year"<<endl;

        
         return 0;
      }
            //constant argument

          //  int  strlen (const char *p){

         //   }