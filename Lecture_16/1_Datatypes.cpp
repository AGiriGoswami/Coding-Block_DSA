#include <iostream>
using namespace std;

int main(){
    int a = 3;
    float b =2.00;
    double c = 3.5480;
    char d = 'a';
    bool e = true;
    string s = "String";

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<s<<endl;

    // find the datatype size
    cout<<"Find the Datatype"<<endl;

    cout<< "Size of Int :" <<sizeof(a)<<endl;
    cout<< "Size of Float :" <<sizeof(b)<<endl;
    cout<< "Size of Double :" << sizeof(c)<<endl;
    cout<< "Size of Char :" <<sizeof(d)<<endl;
    cout<< "Size of Bool :" <<sizeof(e)<<endl;
    cout<< "Size of String :" <<sizeof(s)<<endl;

    return 0;
}