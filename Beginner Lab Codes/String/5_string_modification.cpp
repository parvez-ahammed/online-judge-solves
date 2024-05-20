#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello, World!";

    // Insert
    str.insert(7, "beautiful ");
    cout << "After insert: " << str << endl;

    // Erase
    str.erase(7, 10);
    cout << "After erase: " << str << endl;

    // Replace
    str.replace(7, 5, "Universe");
    cout << "After replace: " << str << endl;

    return 0;
}