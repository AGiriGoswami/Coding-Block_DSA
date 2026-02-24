
// * * *     * * * 
// * *         * *
// *             *

// *             *
// * *         * *
// * * *     * * *

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = (n+1)/2;
    // Upper half
    for(int i=1; i<=m;i++){
        // left star
        for(int j=1;j<=m-i;j++){
            cout<<"* ";
        }
        // space
        for(int j=1;j<=2*i;j++){
            cout<<"  ";
        }
        // right star
        for(int j=1;j<=m-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // Lower half
    for(int i=m-1;i>=1;i--){
        // left star
        for(int j=1;j<=m-i;j++){
            cout<<"* ";
        }
        // space
        for(int j=1;j<=2*i;j++){
            cout<<"  ";
        }
        // right star
        for(int j=1;j<=m-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}