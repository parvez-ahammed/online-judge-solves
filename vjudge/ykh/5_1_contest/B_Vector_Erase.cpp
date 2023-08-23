#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int32_t main()
{

    FAST;
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int id;
    cin >> id;
    v.erase(v.begin() + id);

    int l, r;
    cin >> l >> r;
    v.erase(v.begin() + l, v.begin() + r);

    n = v.size() - 1;
    cout << n <<  endl;

    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
    return 0;
}