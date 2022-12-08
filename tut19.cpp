/*#include<iostream>
using namespace std;

int sum(int a , int b){
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a,int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a + b + c ;
}

int main(){
    cout<<"the sum of 3 and 6 is"<<sum(3,6)<<endl;
    cout<<"the sum of 3,7 and 6 is"<<sum(3,7,6)<<endl;

    return 0;
}*/

#include<iostream>
using namespace std;

//calculating the value of cylinder
int volume(double r, int h){
    return(3.14*r*r*h);

}
//calculating the value of value of cuboid
int volume(int l , int b, int h){
    return(l*b*h);

}
//calculating the value of cube
int volume(int a){
    return (a*a*a);
}

int main(){
    cout<<"the volume of cuboid of 3,7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"the volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"the volume of cube of side 3 is "<<volume(3)<<endl;

    return 0;

}
