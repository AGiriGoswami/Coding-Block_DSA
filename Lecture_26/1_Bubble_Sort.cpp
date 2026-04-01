#include<iostream>
using namespace std;

int main(){

    // user input ion array

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    // Bubble sort in array

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

    // Print in Array

    for(int i =0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;

}