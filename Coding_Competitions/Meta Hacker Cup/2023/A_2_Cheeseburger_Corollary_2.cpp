#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll A, B, C;

void solve()
{

    // 2 3 5
    // 1 1
    // bun total -> 4
    // patty total -> 3

    cin >> A >> B >> C;

    ll kinteParbo = 0;
    ll pattyPabo = 0;
    ll bunPabo = 0;
    ll takaBaki = 0;

    if (2 * A > B) {
        kinteParbo = C / B;
        pattyPabo = kinteParbo * 2;
        bunPabo = pattyPabo;

        takaBaki = C % B;

        if (takaBaki >= A) {
            ll eiTakayKinteParbo = takaBaki / A;
            pattyPabo += eiTakayKinteParbo;
            bunPabo += (eiTakayKinteParbo * 2);
            takaBaki = takaBaki % A;
        }

        //cout << "DOUBLE ";

    } else {
        kinteParbo = C / A;
        pattyPabo = kinteParbo;
        bunPabo = (kinteParbo * 2);

        takaBaki = C % A;

        if (takaBaki >= B) {
            ll eiTakayKinteParbo = takaBaki / B;
            pattyPabo += (eiTakayKinteParbo *2);
            bunPabo += (eiTakayKinteParbo * 2);
            takaBaki = takaBaki % B;
        }
        //cout << "Single ";
    }

    //cout << pattyPabo << " " << bunPabo << " " << takaBaki << endl;

    if (pattyPabo + 1 <= bunPabo) {
        cout << pattyPabo << endl;
    } else {

        ll ans = max(0LL, bunPabo - 1);
        cout << ans << endl;
    }
}
int32_t main()
{
    // for test
    //freopen("t_inputa2.txt", "r", stdin);
    //freopen("t_outputa2.txt", "w", stdout);

    // for validation
    //freopen("v_inputa2.txt", "r", stdin);
    //freopen("v_outputa2.txt", "w", stdout);

    // for submission
    freopen("s_inputa2.txt", "r", stdin);
    freopen("s_outputa2.txt", "w", stdout);

    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}