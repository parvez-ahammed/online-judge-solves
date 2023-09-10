#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> a;
map<int, int> mp;
int N;
void printVector(vector<int> v)
{
    for (int i = 1; i <= N; i++)
        cout << v[i] << " ";
    cout << endl;
}
void leftRotate(int x, int n)
{
    vector<int> temp(n + 5);
    for (int i = 1; i <= n; i++) {
        int pos = n - ((n + x - i) % n);

        mp[a[i]] = pos;
        temp[pos] = a[i];
    }
    for (int i = 1; i <= n; i++)
        a[i] = temp[i];
}

void solve()
{

    cin >> N;
    a.clear();
    mp.clear();
    a.resize(N + 5);

    for (int i = 1; i <= N; i++)
        cin >> a[i], mp[a[i]] = i;

    vector<int> ans(N + 5, 0);

    for (int i = N; i > 1; i--) {

        int rotate = mp[i] % i;

        ans[i] = rotate;
        
        leftRotate(rotate, i);
    }

    printVector(ans);
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
