#include <iostream>
using namespace std;

// No Arguement and No return

void greet()
{
    cout << "Good Morning" << endl;
}

// No Arguement and return

int subtract()
{
    int a = 5;
    int b = 2;
    int c = a - b;
    return c;
}

// Arguement and No return

void hello(string name)
{
    cout << "Hello " << name << endl;
}

// Arguement and return

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{

    greet();
    cout << subtract() << endl;
    hello("Ajay");
    cout << add(10, 30) << endl;

    return 0;
}