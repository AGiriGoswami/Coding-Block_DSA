#include <iostream>
using namespace std;

int main()
{

    // int n = 5;
    // cout << "Enter the Number in Rows: ";
    // cin >> n;

    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // for(int i =0; i<n;i++){
    //     for(int j = 0; j < n ; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    // for(int i =1; i<=n; i++){
    //     for(int j =1; j<=n; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // A B C D E
    // A B C D E
    // A B C D E
    // A B C D E
    // A B C D E

    // for(int i =0; i<n;i++){
    //     char a = 'A';
    //     for(int j =0; j<n; j++){
    //         cout<<a<<" ";
    //         a ++;
    //     }
    //     cout<<endl;
    // }

    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1

    // for(int i =n; i>=1 ; i--){
    //     for(int j = n; j>=1; j--){
    //         cout<< j <<" ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    // for(int i = 1; i<=n ; i++){
    //     for(int j =1; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // 5
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1

    // for(int i = n ; i>=1; i--){
    //     for(int j = n ; j>=i; j--){
    //         cout<< j<< " ";
    //     }
    //     cout<<endl;
    // }

    // A
    // A B
    // A B C
    // A B C D
    // A B C D E

    //  for(int i = n ; i>=1; i--){
    //     char a = 'A';
    //     for(int j = n ; j>=i; j--){
    //         cout<< a<< " ";
    //         a++;
    //     }
    //     cout<<endl;
    // }

    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // A B C D E
    // A B C D
    // A B C
    // A B
    // A

    // for (int i = 1; i <= n; i++)
    // {
    //     char a = 'A';
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << a << " ";
    //         a++;
    //     }
    //     cout << endl;
    // }

    // 1. add two number

    // int x = 10;
    // int y =28;
    // int z = x+y;
    // cout<< "Add to Number :" << z ;

    // 2. Simple_interest_calculation.cpp

    // int p,r,t;
    // cin>>p>>r>>t;
    // int si = (p*r*t)/100;
    // cout<<si;

    // 3. Check_wether_number

    // int a;
    // cin>>a;
    // if(a%2 ==0){
    //     cout<<"Even Number : " <<a;
    // }
    // else{
    //     cout<<"Odd Number : "<<a;
    // }

    // 4. Grade_Card_problem

    // int marks;
    // cin>>marks;

    // if(marks >= 90 && marks <=100){
    //     cout<<"A";
    // }else if ( marks >=70 && marks <90){
    //     cout<<"B";

    // }else if ( marks >=50 && marks <70){
    //     cout<<"C";

    // }else if ( marks >=33 && marks <50){
    //     cout<<"D";

    // }else if ( marks >=0 && marks <33){
    //     cout<<"Fail";
    // }
    // else{
    //     cout<<"Invalid Number";
    // }

    // 5. Maximum_of_three_numbers.cpp

    // int a, b , c;
    // cin>>a>>b>>c;

    // if(a>=b && a>=c){
    //     cout<<a;
    // }
    // else if(b>=a && b>=c){
    //     cout<<b;
    // }else{
    //     cout<<c;
    // }

    // 6. Maximum_of_two_numbers.cpp

    // int a, b;
    // cin>>a>>b;

    // if(a>=b){
    //     cout<<a;
    // }
    // else{
    //     cout<<b;
    // }

    // 7. Print_counting_from_1_to_Number

    // int number;
    // cin >> number;
    // for (int i = 1; i <= number; i++)
    // {
    //     cout << i <<endl;

    // }

    // 8. table_Print
    // int m ;
    // cin>> m;
    // for(int i =1;i<=10; i++){
    //     cout<<m*i<<endl;
    // }

    // 9. Find_the_sum_of_N_Natural_Numbers

    // int num, sum = 0;
    // cin>>num;

    // for(int i =1; i<=num; i++){
    //     sum = sum +i;
    // }
    // cout<<sum;

    // 10. factorial

    // int nums;
    // cin>>nums;
    // long long  fact =1;

    // for(int i=1; i<=nums; i++){
    //     fact = fact*i;
    // }
    // cout<<fact;

    // 11. Even_numbers_from_1_to_100

    // for(int i=1; i<=100; i++){
    //     if(i%2 == 0){
    //         cout<<"Even Number :"<<i<<endl;;
    //     }
    // }

    // 12. Sum_of_Digits

    // int nums, sum = 0;
    // cin >> nums;
    // while (nums > 0)
    // {
    //     int d = nums%10;
    //     sum = sum + d;
    //     nums = nums/10;
    // }
    // cout << sum;

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // int n = 4;

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < i + 1; j++) {
    //         cout << (i+1) <<" ";
    //     }
    //     cout << endl;
    // }

    // A
    // A B
    // A B C
    // A B C D

    //     int n =4;
    // for(int i = 1; i <= n; i++) {
    //         char a = 'A';

    //         for(int j = 1; j <= i; j++) {
    //             cout << a << " ";
    //             a++;
    //         }

    //         cout << endl;
    //     }

    // int n = 5;
    // for(int i=1;i<=n;i++){
    //     char a= 'a';
    //     for(int j=1; j<= n-i+1; j++){
    //         cout<<"* " << a << " ";
    //         a++;
    //     }
    //     cout<<endl;
    // }

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

// A 
// B C
// D E F
// G H I J

    // int n = 4;
    // int sum = 1;
    // char a = 'A';
    // for(int i =0; i<n; i++){
    //     for(int j = i+1; j>0 ; j--){
    //         cout<<a<<" ";
    //         a++;
    //     }
    //     cout<<endl;
    // }


    

    return 0;
}