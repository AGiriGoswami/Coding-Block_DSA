// Patterns - 1
// n = 5
// * * * * *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << " * ";
    }

    return 0;
}