#include<bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello, World!";
    
    cout << "Length: " << str.length() << std::endl;
    cout << "Size: " << str.size() << std::endl;
    cout << "Capacity: " << str.capacity() << std::endl;

    str.reserve(50); // Reserve space for 50 characters
    cout << "New Capacity after reserve: " << str.capacity() << std::endl;

    return 0;
}