    #include<iostream>
    using namespace std;
    int main(){
        int n ;
        cin >> n;
        int b = 1;
        while(n != 0 ){
            int r = n%2;
            b =  b*10+r;
            n = n/2;

        } 
        cout << b/10 ;
        // reverse function bana hai
    }