#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    int a[n];

    // user input in array
    for(int i = 0; i<n ; i++){
        cin>>a[i];
    }

    // insertion_sort in array
    for(int i=0; i<n; i++){
        int key = a[i];
        int j = i-1;
        while(j>=0 and a[j]> key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }


    // print in array
    for(int i =0; i<n ; i++){
        cout<<a[i]<< " ";
    }
    return 0;
}