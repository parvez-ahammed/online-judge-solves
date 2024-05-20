#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 42;
    double pi = 3.14159;

    // Convert numerical values to strings
    string str_num = to_string(num);
    string str_pi = to_string(pi);

    cout << "Integer to string: " << str_num << endl;
    cout << "Double to string: " << str_pi << endl;

    // Convert strings to numerical values
    string str = "12345";
    int int_val = stoi(str);
    double double_val = stod(str);

    cout << "String to integer: " << int_val << endl;
    cout << "String to double: " << double_val << endl;

    return 0;
}
