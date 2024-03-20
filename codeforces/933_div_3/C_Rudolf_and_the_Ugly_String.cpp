#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int ans = 0;
string processMapPie(string s)
{
    int n = s.size();
    string temp = "";
    for (int i = 0; i < n; i++) {
        if (s[i] == 'p' && i + 2 < n and i - 2 >= 0) {
            if (s[i + 1] == 'i' && s[i + 2] == 'e' and s[i - 1] == 'a' and s[i - 2] == 'm') {
                ans++;
            } else {
                temp += s[i];
            }
        } else {
            temp += s[i];
        }
    }
    return temp;
}
string processMap(string s, char last, char mid, char first)
{
    int n = s.size();
    string temp = "";
    for (int i = 0; i < n; i++) {

        if (s[i] == last && i - 2 >= 0) {
            if (s[i - 1] == mid && s[i - 2] == first) {
                ans++;
            } else {
                temp += s[i];
            }
        } else {
            temp += s[i];
        }
    }
    return temp;
}

void solve()
{

    ans = 0;
    int n;
    cin >> n;
    string s;
    cin >> s;

    s = processMapPie(s);
    s = processMap(s, 'p', 'a', 'm');
    s = processMap(s, 'e', 'i', 'p');
    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}