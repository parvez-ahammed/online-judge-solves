#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> a(n), b(n , 1);

    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    int moreThanOnceCnt = 0;

    for (auto [key, value] : mp) {

        moreThanOnceCnt += (value.size() > 1);
    }

    if ( moreThanOnceCnt< 2) {
        cout << -1 << endl;
        return;
    }

    int doneCnt =  0 ;

    for (auto [key, value] : mp) {

        if (value.size() > 1 ) {

            if (doneCnt == 0) {
                b[value[0]] = 2;
                doneCnt++;
                continue;
            }

            if (doneCnt == 1) {
                b[value[1]] = 3;
                doneCnt++;
            }

            
        }

        if (doneCnt == 2) {
            break;
        }
    }


    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    // ai == aj and bi = 1 and bj = 2
    // ai == aj and bi = 1 and bj = 3
    // ai == aj and bi = 2 and bj = 3
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