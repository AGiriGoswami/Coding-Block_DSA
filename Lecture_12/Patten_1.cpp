#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // left star
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        // space
        for (int j = 1; j <= 2 * (n - 1); j++)
        {
            cout << "  ";
        }
        // right star
        if (i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}