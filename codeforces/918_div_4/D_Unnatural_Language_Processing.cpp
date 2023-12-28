#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

// a e  -> V
// b c d -> C

// CV , CVC
// CV banaitei hobe
// CVC ki banbo naki banabo na vaba lagbe
// CVC kokhn banano uchit ? -> jokhn pore ar CV banano jabe na

// CVC CVC CVC CVC CVC CVC CVC
// CV CV CV CV CV CV CV CV
// CV CVC CV CVC CV CVC
// CVC CVC CVC CVC CV CV CV 

bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e');
}
void solve()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    string ans = "";

    for (int i = n - 1; i >= 0;) {

        if (isVowel(s[i])) {
            ans += s[i];
            i--;
            ans += s[i];
            i--;
            ans += ".";
        } else {
            ans += s[i];
            i--;
            ans += s[i];
            i--;
            ans += s[i];
            i--;
            ans += ".";
        }
    }

    ans.erase(ans.end() - 1);

    reverse(ans.begin(), ans.end());

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