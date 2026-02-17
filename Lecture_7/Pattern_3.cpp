
// * * * * *
//   * * *
//     *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Rows:";
    cin >> n;
    for(int i=1; i<=n; i++){
        // Space Printing
        for(int j=1; j<i; j++){
            cout << "  ";
        }
        // Star Printing
        for(int j=1; j<=2*(n-i)+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}