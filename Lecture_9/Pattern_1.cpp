
// *               * 
// * *           * * 
// * * *       * * * 
// * * * *   * * * * 
// * * * *   * * * * 
// * * * * * * * * * 
    

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i =1; i<=n;i++){
        for (int j=1; j<=n; j++){
            if (j<=i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        for (int j=n-1; j>=1; j--){
            if (j<=i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }


   return 0;
}