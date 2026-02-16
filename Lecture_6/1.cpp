// Patterns - 1
// n = 5
// * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         cout << " * ";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++){
            cout << " * ";
        }
        cout << endl;
    }
        return 0;
    }