#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> a = {5,7,10,3,6};
    sort(a.begin(),a.end());
    // sorting order
    cout<<"Sorting Order"<<endl;
    for(int i = 0 ; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // reverse order
    cout<<"Reverse Order"<<endl;
    vector<int> b = {2,3,4,5,6};
    reverse(b.begin(),b.end());
    for(int i = 0; i<b.size();i++){
        cout<<b[i]<<" ";
    }
    return 0;
}