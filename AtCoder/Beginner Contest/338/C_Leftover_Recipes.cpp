#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define F first
#define SF second.first
#define SS second.second

vector<pair<int, pair<int, int>>> v(1e6 + 5);

int N;

int ZeroDiv(int a, int b)
{
    if (b == 0)
        return a;

    return a / b;
}

void solve()
{

    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> v[i].F;
    }

    for (int i = 1; i <= N; i++) {
        cin >> v[i].SF;
    }

    for (int i = 1; i <= N; i++) {
        cin >> v[i].SS;
    }

    // normalize

    for (int i = 1; i <= N; i++) {
        int mn = min({ v[i].F, v[i].SF, v[i].SS });
        v[i].F = ZeroDiv(v[i].F, mn);
        v[i].SF = ZeroDiv(v[i].SF, mn);
        v[i].SS = ZeroDiv(v[i].SS, mn);
    }

    int canMakeMxA = INT_MAX, canMakeMxB = INT_MAX;

    for (int i = 1; i <= N; i++) {
        int takeA = ZeroDiv(v[i].F, v[i].SF);
        int takeB = ZeroDiv(v[i].F, v[i].SS);

        canMakeMxA = min(canMakeMxA, takeA);
        canMakeMxB = min(canMakeMxB, takeB);
    }

    cout << canMakeMxA << " " << canMakeMxB << endl;

    queue<pair<int, int>> q;

    for (int i = 0; i <= canMakeMxA; i++) {
        q.push({ i, canMakeMxB });
    }

    for (int i = 1; i <= N; i++) {
        // jodi A ke priority deya hoy
        int remain = v[i].F - (v[i].SF * canMakeMxA);
        int takeB = ZeroDiv(remain, v[i].SS);

        int sumPriorA = canMakeMxA + min(canMakeMxB, takeB);

        // jodi B ke priority deya hoy
        remain = v[i].F - (v[i].SS * canMakeMxB);
        int takeA = ZeroDiv(remain, v[i].SF);
        int sumPriorB = canMakeMxB + min(canMakeMxA, takeA);

        if (sumPriorA >= sumPriorB) {
            canMakeMxB = min(canMakeMxB, takeB);
        } else {
            canMakeMxA = min(canMakeMxA, takeA);
        }
        cout << canMakeMxA << " " << canMakeMxB << endl;
    }
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