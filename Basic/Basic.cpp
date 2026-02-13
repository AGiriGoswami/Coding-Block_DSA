// #include <iostream>

// int main() {
//     std::cout << "Hello, World!" << std::endl;
//     return 0;
// }


// ADD two Numbers  

// #include <iostream>
// int main(){
//     int a = 10;
//     int b = 20;
//     int sum = a + b;
//     std::cout << "The sum of " << sum << std::endl;
//     return 0;
// }

// Simple Interest Calculator

#include <iostream>
int main() {
    double principal, rate, time, simpleInterest;
    std::cout << "Enter principal amount: ";
    std::cin >> principal;
    std::cout << "Enter rate of interest: ";
    std::cin >> rate;
    std::cout << "Enter time in years: ";
    std::cin >> time;
    simpleInterest = (principal * rate * time) / 100;
    std::cout << "Simple Interest: " << simpleInterest << std::endl;
    return 0;
}