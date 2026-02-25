//         1 
//       2 2 2
//     3 3 3 3 3
//   4 4 4 4 4 4 4
// 5 5 5 5 5 5 5 5 5


#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Rows:";
    cin >> n;
    for(int i=1; i<=n; i++){
        // Space Printing
        for(int j=1; j<=n-i; j++){
            cout <<"  ";
        }
        // Star Printing
        for(int j=1; j<=2*i-1; j++){
            cout <<i<<" ";
        }
        cout << endl;
    }
}