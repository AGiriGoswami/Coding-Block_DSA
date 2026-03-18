#include <iostream>
#include <vector>      // Dynamic array (vector) use karne ke liye
#include <algorithm>   // sort() aur reverse() algorithms ke liye

using namespace std;

int main() {
    // 1. Vector Initialization
    // Ek vector 'a' banaya aur usme initial values daali.
    vector<int> a = {5, 7, 10, 3, 6};

    // 2. Sorting in Ascending Order (Chote se bada kram)
    // sort() function values ko order mein set karta hai.
    sort(a.begin(), a.end());
    cout << "Sorting By Ascending Order:" << endl;
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " "; // Output: 3 5 6 7 10
    }
    cout << endl << "-------------------" << endl;

    // 3. Sorting in Descending Order (Bade se chota kram)
    // 'greater<int>()' use karne se sorting ulti (bade se choti) hoti hai.
    cout << "Sorting By Descending Order:" << endl;
    sort(a.begin(), a.end(), greater<int>());
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " "; // Output: 10 7 6 5 3
    }
    cout << endl << "-------------------" << endl;

    // 4. Reverse Order (Sirf positions ko palat dena)
    // Reverse sorting nahi hai, bas elements ka order piche se aage kar deta hai.
    cout << "Reverse Order Example:" << endl;
    vector<int> b = {2, 3, 4, 5, 6};
    reverse(b.begin(), b.end()); // {2,3,4,5,6} ban jayega {6,5,4,3,2}
    for(int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << endl << "-------------------" << endl;

    // 5. Accessing Elements (Elements ko check karna)
    // front() -> Pehla element
    // back()  -> Akhiri element
    // at(i)   -> Kisi specific index 'i' ka element
    cout << "Front Element: " << a.front() << endl; // Pehla
    cout << "Back Element: " << b.back() << endl;   // Akhiri
    cout << "Element at Index 2: " << a.at(2) << endl; 
    cout << "-------------------" << endl;

    // 6. Insert Element (Beech mein value daalna)
    // a.begin() + 2 matlab index 2 par 100 insert karo.
    // Baaki elements apne aap aage shift ho jayenge.
    a.insert(a.begin() + 2, 100);
    cout << "After Inserting 100 at Index 2:" << endl;
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl << "-------------------" << endl;

    // 7. Erase Element (Element hatana)
    // erase() us index ki value ko khatam kar deta hai.
    a.erase(a.begin() + 2); // Jo 100 dala tha, use ab hata rahe hain.
    cout << "After Erasing Element at Index 2:" << endl;
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl << "-------------------" << endl;

    // 8. Clear and Empty Check
    // clear() pure vector ko khaali kar deta hai.
    a.clear();
    
    // empty() check karta hai ki kya size 0 ho gayi hai?
    if(a.empty()) {
        cout << "Vector 'a' is now empty!" << endl;
    }

    return 0;
}