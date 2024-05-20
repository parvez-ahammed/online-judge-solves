#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string s1; // Empty string
    string s2 = "Hello, World!"; // From a C-string
    string s3("Hello, World!"); // Another way from a C-string
    string s4(s2); // Copy constructor
    string s5(5, 'A'); // Fill constructor

    // Assignment
    s1 = s2;

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
    cout << "s5: " << s5 << endl;


    string str = "Hello, World!";
    string substr = str.substr(7, 5); // "World"
    str.push_back('!');
    str.pop_back();
    size_t found = str.find("World");
    if (found != string::npos) {
        cout << "Found 'World' at index " << found << endl;
    }

    // Concatenation example
    str += '!';
    str = str + '!';
    str.append(1, '!');
    // in the case of concatenating a single character, += is better
  

    // istringstream example
    string input = "10 20 30";
    istringstream iss(input);
    int a, b, c;
    iss >> a >> b >> c;
    cout << "a: " << a << " b: " << b << " c: " << c << endl;

    return 0;
}