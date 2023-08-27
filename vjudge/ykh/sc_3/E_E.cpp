#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

struct jedi {
    int a, b, c;
};

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<jedi> v(n);

    int mxB = 0;
    int mxC = 0;

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;

        v[i].a = max(x, max(y, z));
        v[i].c = min(x, min(y, z));
        v[i].b = x + y + z - v[i].a - v[i].c;

        mxB = max(mxB, v[i].b);
        mxC = max(mxC, v[i].c);
    }

    vector<int> ans;

    for (int i = 0; i < n; i++) {

        if (v[i].a >= mxB and v[i].b >= mxC) {
            ans.push_back(i + 1);
        }
    }

    cout << ans.size() << endl;

    for (auto it : ans) {
        cout << it << " ";
    }

    return 0;
}