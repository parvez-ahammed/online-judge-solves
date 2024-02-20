/*
  Author: MEHEDI ISLAM REMON
  AUST CSE 44th Batch
*/
#include <bits/stdc++.h>
#define ll long long int
#define nline "\n"
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cin.tie(nullptr);             \
    cout.tie(nullptr);
#define pb push_back
#define pi acos(-1)
#define Mod 1000000007
#define sn 10000000011
#define MAX intONG_MAX
#define F first
#define S second
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<pair<int, int>> v(n + 5);
    stack<int> st;
    st.push(a[n]);
    v[n].F = 0;

    for (int i = n - 1; i > 0; i--) {
        if (a[i] == st.top()) {
            v[i].F = 0;
        }
        if (a[i] < st.top()) {
            if (st.size() == 1) {
                st.pop();
                st.push(a[i]);
            }
            v[i].F = 0;
        }
        if (a[i] > st.top()) {

            st.push(a[i]);
            v[i].F = st.size();
        }
    }

    while (!st.empty())
        st.pop();

    st.push(a[1]);
    v[1].S = 0;

    for (int i = 2; i <= n; i++) {
        if (a[i] == st.top()) {
            v[i].S = 0;
        }
        if (a[i] < st.top()) {
            if (st.size() == 1) {
                st.pop();
                st.push(a[i]);
            }
            v[i].S = 0;
        }
        if (a[i] > st.top()) {
            st.push(a[i]);
            v[i].S = st.size();
        }
    }

    int res = -1;
    int pick = 0;
    for (int i = 1; i <= n; i++) {
        if (v[i].F > 0 and v[i].S > 0) {
            //res = max(res, v[i].F + v[i].S - 1);
            int mn = min(v[i].F, v[i].S);
            res = max(res, mn * 2 - 1);

        }
    }
    if (res < 3)
        cout << -1 << endl;
    else
        cout << res << endl;
}

int main()
{
    fast;

    ll test;
    cin >> test;
    for (ll t = 1; t <= test; t++) {
        cout << "Case " << t << ": ";
        solve();
    }
}