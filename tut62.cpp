#include <iostream>
#include <fstream>
#include <string> //string me hai to iska bhi likhna hoga
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    out << "this is me\n";
    out << "this is also me ";
    out.close();

    ifstream in;
    string st; // st, st2, st3 aise krne se jite likhte rahoge utne words ayegnge
    in.open("sample60.txt");
    while (in.eof() == 0) // for puri line reADING
    //eof mtlb end of line()
    { 
        getline(in,st);
    cout<<st<<endl;
    }


    // in>>st>>st2;
    // cout<<st<<st2;


        return 0;
}