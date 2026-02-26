
// 5 4 3 2 *
// 5 4 3 * 1
// 5 4 * 2 1
// 5 * 3 2 1
// * 4 3 1 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Rows:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = n; j >= 1; j--)
        {
            // star print 
            if (i == j)
            {
                cout << "* ";
            }

            // number print
            else
            {
                cout << j << " ";
            }
        }

        cout << endl;
    }
    return 0;
}