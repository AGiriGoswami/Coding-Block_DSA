#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    vector<vector<int>> mat(r, vector<int>(c));

    // Input
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];

    int top = 0, bottom = r - 1;
    int left = 0, right = c - 1;

    while (top <= bottom && left <= right)
    {
        // Top Row
        for (int j = left; j <= right; j++)
            cout << mat[top][j] << " ";
        top++;

        // Right Column
        for (int i = top; i <= bottom; i++)
            cout << mat[i][right] << " ";
        right--;

        // Bottom Row
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
                cout << mat[bottom][j] << " ";
            bottom--;
        }

        // Left Column
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                cout << mat[i][left] << " ";
            left++;
        }
    }

    return 0;
}