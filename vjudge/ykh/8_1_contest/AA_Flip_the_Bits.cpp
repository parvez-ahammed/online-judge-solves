#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    string a, b;

    cin >> a >> b;
    a.insert(a.begin(), '#');
    b.insert(b.begin(), '#');
    vector<int> v(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        v[i] = v[i - 1];
        v[i] += (a[i] - '0');
    }

    bool flipped = false;

    bool possible = true;

    for (int i = n; i > 0; i--) {
        //cout << a[i];


        if ((a[i] != b[i] and !flipped) or (a[i] == b[i] and flipped))
        {
            // flip korte hobe 
            // flip ki kora jabe ?

            //cout << "FLIP " << i << endl;

            int oncCnt = v[i];
            int zeroCnt = i - oncCnt;

            if (oncCnt == zeroCnt) {
                flipped = !flipped;
            }
            else {
                possible = false;

              
                break;
            }


        }

    }

    //cout << endl;

    cout << (possible ? "YES" : "NO") << endl;
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