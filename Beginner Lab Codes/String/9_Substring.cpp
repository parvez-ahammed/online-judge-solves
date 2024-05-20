#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "ababcabc";
    string substr = "abc";
    
    // Finding a substring
    size_t found = str.find(substr);
    if (found != string::npos) {
        cout << "Found '" << substr << "' at index " << found << endl;
    }

    // Counting substrings
    int count = 0;
    size_t pos = str.find(substr, 0);
    while (pos != string::npos) {
        count++;
        pos = str.find(substr, pos + 1);
    }
    cout << "Number of times '" << substr << "' occurs: " << count << endl;

    // Deleting a substring
    str.erase(found, substr.length());
    cout << "String after deletion: " << str << endl;

    return 0;
}
