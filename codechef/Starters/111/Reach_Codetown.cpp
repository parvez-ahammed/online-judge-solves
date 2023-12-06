#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool isVowel(char c)
{
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
void solve()
{

    string str;
    cin >> str;

    if (str == "CODETOWN") {
        cout << "YES" << endl;
        return;
    }

    if (!isVowel(str[0]) && isVowel(str[1]) && !isVowel(str[2]) && isVowel(str[3]) && !isVowel(str[4]) && isVowel(str[5]) && !isVowel(str[6]) && !isVowel(str[7])  ) {
        cout << "YES" << endl;
        return;
       
    }

    cout << "NO" << endl;

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