#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int main() {
    FAST;

    string t, s;
    cin >> t >> s;

    int n = t.length();
    int tIndice = 0;
    while (tIndice < n && tIndice < s.length() && t[tIndice] == s[tIndice])
        tIndice++;

    int sIndice = n - 1;
    int sMatchIndice = s.length() - 1;
    while (sIndice > tIndice && sMatchIndice >= 0 && t[sIndice] == s[sMatchIndice]) {
        sIndice--;
        sMatchIndice--;
    }
    sIndice++;

    string tmp = t.substr(tIndice, sIndice - tIndice);
    reverse(tmp.begin(), tmp.end());

    tmp = t.substr(0, tIndice) + tmp + t.substr(sIndice);


    if ((tmp == s))
        cout << "YES";
    else
        cout << "NO";

    cout << endl;
    return 0;
}
