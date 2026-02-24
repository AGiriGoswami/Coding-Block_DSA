
//      * 
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = (n+1)/2;
    // upper half
    for(int i=1;i<=m;i++){
        // space
        for(int j=1;j<=m-i;j++){
            cout<<"  ";
        }
        // star
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // Lower half
       for(int i=m-1;i>=1;i--){
        // space
        for(int j=1;j<=m-i;j++){
            cout<<"  ";
        }
        // star
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}