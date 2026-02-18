

//         * 
//       * *
//     * * *
//   * * * *
// * * * * *
//   * * * *
//     * * *
//       * *
//         *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    // Upper Case
    for(int i =1; i<=n;i++){
        // Space print
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        // Star print
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // Lower Case
    // Reverse pattern
        for(int i =n-1; i>=1;i--){
            // Space print
            for(int j=1;j<=n-i;j++){
                cout<<"  ";
            }
            // Star print
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    return 0;
}
