// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     int total = 2 * N - 1;

//     // Upper part
//     for (int i = 1; i <= N; i++) {
//         int stars = N - i + 1;
//         int spaces = (i - 1) * 2 - 1;

//         if (spaces < 0) { 
//             // First row
//             for (int j = 0; j < total; j++)
//                 cout << "*";
//         } 
//         else {
//             for (int j = 0; j < stars; j++)
//                 cout << "*";

//             for (int j = 0; j < spaces; j++)
//                 cout << " ";

//             for (int j = 0; j < stars; j++)
//                 cout << "*";
//         }

//         cout << endl;
//     }

//     // Lower part
//     for (int i = N - 1; i >= 1; i--) {
//         int stars = N - i + 1;
//         int spaces = (i - 1) * 2 - 1;

//         if (spaces < 0) {
//             for (int j = 0; j < total; j++)
//                 cout << "*";
//         } 
//         else {
//             for (int j = 0; j < stars; j++)
//                 cout << "*";

//             for (int j = 0; j < spaces; j++)
//                 cout << " ";

//             for (int j = 0; j < stars; j++)
//                 cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     for (int i = 0; i <= 2 * N; i++) {

//         int k = (i <= N) ? i : 2 * N - i;

//         // Left decreasing numbers
//         for (int j = N; j >= N - k; j--) {
//             cout << j << " ";
//         }

//         // Middle spaces
//         int spaces = 2 * (N - k) - 1;
//         for (int j = 0; j < spaces; j++) {
//             cout << "  ";
//         }

//         // Right increasing numbers
//         int start = (k == N) ? 1 : N - k;
//         for (int j = start; j <= N; j++) {
//             cout << j << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }



#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int N;
    cin >> N;

    for(int i = 0; i <= 2*N; i++) {

        int spaces = abs(N - i);

        // print leading spaces
        for(int s = 0; s < spaces; s++) {
            cout << "  ";
        }

        int start = N - spaces;

        // decreasing numbers
        for(int j = start; j >= 0; j--) {
            cout << j << " ";
        }

        // increasing numbers
        for(int j = 1; j <= start; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}