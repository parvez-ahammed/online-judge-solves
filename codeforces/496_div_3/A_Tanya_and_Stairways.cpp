#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;

    int x;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x == 1 and i != 0) {
            v.push_back(cnt);
            cnt = 0;
        }

        cnt++;
    }

    v.push_back(cnt);

    int steps = v.size();

    cout << steps << endl;

    for (int i = 0; i < steps; i++) {
        cout << v[i] << " ";
    }

    return 0;
}