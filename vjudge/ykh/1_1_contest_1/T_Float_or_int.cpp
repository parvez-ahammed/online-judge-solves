#include <bits/stdc++.h>
using namespace std;
int main()
{

    float a;
    cin >> a;

    int(a) == a ? cout << "int " << int(a) : cout << "float " << int(a) << " " << float(a - int(a));
}