#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void kGreater(int n, int k, string s)
{
    char smallestChar = 'z';

    for (int i = 0; i < n; i++) {
        smallestChar = min(smallestChar, s[i]);
    }

    cout << s;

    for (int i = n; i < k; i++) {
        cout << smallestChar;
    }
}

void kLesserEqual(int n, int k, string s)
{

    map<char, int> occ;

    for (int i = 0; i < n; i++) {
        occ[s[i]]++;
    }

    string temp = s.substr(0, k);

    int sz = temp.size();
    sz -= 1;

    int misMatchPoint = -1;
    char largeChar;

    for (int i = sz; i >= 0; i--)

    {

        bool exist = false;

        for (auto x : occ) {
            if (x.first > temp[i]) {
                exist = true;
                largeChar = x.first;
                break;
            }
        }

        if (exist) {
            misMatchPoint = i;
            break;
        }
    }

    string t = "";

    for (int i = 0; i < misMatchPoint; i++) {
        t += temp[i];
    }
    t += largeChar;
    char minChar = occ.begin()->first;
    for (int i = misMatchPoint + 1; i < k; i++) {
        t += minChar;
    }
    

    cout << t;
}
void solve()
{

    int n, k;
    string s;
    cin >> n >> k >> s;

    // given s find t of length k such that elements of t are in s and t is lexicographically smaller than s

    if (k > n) {
        kGreater(n, k, s);
    } else {
        kLesserEqual(n, k, s);
    }

    cout << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}