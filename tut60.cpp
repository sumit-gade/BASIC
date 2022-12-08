   ////////////incomplete/////////////



#include<iostream>
#include<fstream>
using namespace std;
/*the useful classes for working with files in c++ are:
1. fstream
2.ifstream--> derived from fstreambase
3.ofstream--> derived from fstreambase


in order to work with files in c++, you will have to open it.primarily,there are 2 ways to open a file :
1.using the constructor 
2.using the member function open() of the class*/




int main(){
    string st = "harry bhai";
    //opening files using constructor
    ofstream out("sample60.txt"); // write operation
    out<<st;
     return 0;
}