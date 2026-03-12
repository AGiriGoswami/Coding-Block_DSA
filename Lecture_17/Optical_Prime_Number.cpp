// Optical Prime Number

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            return 0;
        }
    }
    cout << "Prime Number"<<endl;
}