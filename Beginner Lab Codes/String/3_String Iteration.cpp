#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello, World!";

    // Using range-based for loop
    for (char c : str) {
        cout << c << " ";
    }
    cout << endl;

    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << " ";
    }
    cout << endl;

    // Using iterators
    for (string::iterator it = str.begin(); it != str.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    // Using reverse iterators
    for (string::reverse_iterator it = str.rbegin(); it != str.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    

    // diffrence between const_iterator and iterator is that const_iterator is used to iterate over a const string


    return 0;
}