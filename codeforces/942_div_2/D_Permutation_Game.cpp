#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n, k, pb, ps;
    cin >> n >> k >> pb >> ps;

    vector<ll> p(n + 1), a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<ll> bodyaMoves, sashaMoves;

    map<int, bool> bodyaVisited, sashaVisited;
    bool bodyaCycle = false, sashaCycle = false;

    int tempK = k;
    while (tempK-- and (!bodyaCycle or !sashaCycle)) {
        bodyaMoves.push_back(a[pb]);
        sashaMoves.push_back(a[ps]);

        if (bodyaVisited[pb]) {
            bodyaCycle = true;
        }
        if (sashaVisited[ps]) {
            sashaCycle = true;
        }

        bodyaVisited[pb] = true;
        sashaVisited[ps] = true;

        pb = p[pb];
        ps = p[ps];
    }

    ll bodyaPoint = 0, sashaPoint = 0;
    ll bodyaPrefix = 0, sashaPrefix = 0;

    for (int i = 0; i < bodyaMoves.size(); i++) {

        ll bodyaOption1Point = bodyaPrefix + (1ll * bodyaMoves[i] * (k - i));
        bodyaPoint = max(bodyaPoint, bodyaOption1Point);
        bodyaPrefix += bodyaMoves[i];
    }

    for (int i = 0; i < sashaMoves.size(); i++) {

        ll sashaOption1Point = sashaPrefix + (1ll * sashaMoves[i] * (k - i));
        sashaPoint = max(sashaPoint, sashaOption1Point);
        sashaPrefix += sashaMoves[i];
    }

    if (bodyaPoint > sashaPoint) {
        cout << "Bodya" << endl;
    } else if (bodyaPoint < sashaPoint) {
        cout << "Sasha" << endl;
    } else {
        cout << "Draw" << endl;
    }
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