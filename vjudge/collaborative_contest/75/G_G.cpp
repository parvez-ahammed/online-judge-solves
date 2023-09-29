#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool isPrime(ll n)
{
    if (n == 1)
        return false;

    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

bool isNumber(string s)
{
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < '0' or s[i] > '9')
            return false;
    }

    if (s.size() > 12 or s.size() < 1)
        return false;

    return stoll(s) <= (1e9 * 1ll);
}
int32_t main()
{

    string s;

    vector<string> v;
    while (cin >> s) {

        
            v.push_back(s);
        
    }

    int numberCount = 0;

    for (int i = 0; i < v.size(); i++) {
        if (isNumber(v[i]))
            numberCount++;
    }

    if (v.size() != 3 or numberCount != 3)
        cout << 0 << endl;
    else {
        int a = stoi(v[0]);
        int b = stoi(v[1]);
        int c = stoi(v[2]);

        if (a < 4 or a > 1e9 or a % 2 == 1) {
            cout << 0 << endl;
            return 0;
        }

        if (isPrime(b) and isPrime(c) and a == b + c)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}