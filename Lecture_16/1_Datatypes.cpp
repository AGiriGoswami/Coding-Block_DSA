#include <iostream>
using namespace std;

int main(){
    int a = 3;
    float b =2.00;
    double c = 3.5480;
    char d = 'a';
    bool e = true;
    string s = "Ajay";

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<s<<endl;

    // find the datatype size

    cout<< "Size of int" <<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;
    cout<<sizeof(s)<<endl;

    return 0;
}