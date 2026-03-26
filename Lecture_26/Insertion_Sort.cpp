#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    int a[n];

    // User Input in Array
    for(int i = 0; i<n ; i++){
        cin>>a[i];
    }

    // Insertion_sort in Array
    for(int i=0; i<n; i++){
        int key = a[i];
        int j = i-1;
        while(j>=0 and a[j]> key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }


    // Print in Array
    for(int i =0; i<n ; i++){
        cout<<a[i]<< " ";
    }
    return 0;
}