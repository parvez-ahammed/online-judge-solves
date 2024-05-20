#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello, World!";
    
    cout << "Initial Length: " << str.length() << endl;
    cout << "Initial Size: " << str.size() << endl;
    cout << "Initial Capacity: " << str.capacity() << endl;

    str.reserve(50); // Request a capacity of at least 50 characters
    cout << "New Capacity after reserve(50): " << str.capacity() << endl;

    // To show how capacity changes when adding characters
    str += " This is a long string to see how capacity changes.";
    cout << "After Adding More Characters:" << endl;
    cout << "Length: " << str.length() << endl;
    cout << "Size: " << str.size() << endl;
    cout << "Capacity: " << str.capacity() << endl;

    

    return 0;
}
