#include <bits/stdc++.h>
using namespace std;
int main()
{

    char c;
    cin >> c;
    if (isalpha(c) && !isupper(c))
        cout
            << "ALPHA\nIS SMALL" << endl;
    else if (isalpha(c))
        cout
            << "ALPHA\nIS CAPITAL" << endl;
    else
        cout << "IS DIGIT" << endl;
}