#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    long long b;
    cin >> a >> b;
    if (b > a)
        swap(a, b);

     (a %b == 0 )? cout << "YES" << endl : cout << "NO" << endl;   
}