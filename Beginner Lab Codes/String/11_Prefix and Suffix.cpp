#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "abcdef";
    
    // Prefix example
    string prefix = str.substr(0, 3); // "abc"
    cout << "Prefix: " << prefix << endl;
    
    // Suffix example
    string suffix = str.substr(str.size() - 3); // "def"
    cout << "Suffix: " << suffix << endl;

    return 0;
}
