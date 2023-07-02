#include <bits/stdc++.h>
using namespace std;
int main()
{

    string c;
    cin >> c;
    (!(int(c[0]) & 1)) ? cout << "EVEN" << endl : cout << "ODD" << endl;
}