#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int pointOf(char ch)
{
    return (ch - 'a') + 1;
}

void solve()
{
    string w;
    int p;

    cin >> w >> p;

    int curr = 0;
    int n = w.size();
    string temp = w;
    map<int, int> mp;
    
    for (int i = 0; i < n; i++) {
        curr += pointOf(w[i]);
        mp[w[i]]++;
    }

    sort(temp.rbegin(), temp.rend());

    for (int i = 0; i < n; i++) {

        if (curr <= p)
            break;

        curr -= pointOf(temp[i]);
        mp[temp[i]]--;
    }

    for (int i = 0; i < n; i++) {
        if (mp[w[i]] > 0) {
            cout << w[i];
            mp[w[i]]--;
        }
    }

    cout << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}