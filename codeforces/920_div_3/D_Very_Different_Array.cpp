#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    deque<int> b;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int j = 0; j < m; j++) {
        int x;
        cin >> x;
        b.push_back(x);
    }

    // have to n element from b and make c
    // such that abs(a[i]-c[i]) is maximum
    // so we will take the smallest element from b
    // and largest element from a

    sort(b.begin(), b.end());

    deque<int> tempA;

    for (int i = 0; i < n; i++) {
        tempA.push_back(a[i]);
    }

    sort(tempA.begin(), tempA.end());

    map<int, queue<int>> mp;

    while (!tempA.empty()) {

        int shamneA = tempA.front();
        int pichoneA = tempA.back();

        int shamneB = b.front();
        int pichoneB = b.back();


        int shamneShaamne = abs(shamneA - shamneB);
        int shamnePichone = abs(shamneA - pichoneB);
        int pichoneShaamne = abs(pichoneA - shamneB);
        int pichonePichone = abs(pichoneA - pichoneB);

        int mx = max({ shamneShaamne, shamnePichone, pichoneShaamne, pichonePichone });

        if (mx == shamneShaamne)
        {
            mp[shamneA].push(shamneB);
            tempA.pop_front();
            b.pop_front();
        }
        else if (mx == shamnePichone)
        {
            mp[shamneA].push(pichoneB);
            tempA.pop_front();
            b.pop_back();
        }
        else if (mx == pichoneShaamne)
        {
            mp[pichoneA].push(shamneB);
            tempA.pop_back();
            b.pop_front();
        }
        else if (mx == pichonePichone)
        {
            mp[pichoneA].push(pichoneB);
            tempA.pop_back();
            b.pop_back();
        }
    }

    ll sum = 0;

    for (int i = 0; i < n; i++) {
        int ai = a[i];
        int ci = mp[ai].front();

       // cout << ai << " " << ci << " " << ai - ci << endl;

        mp[ai].pop();
        sum += abs(ai - ci);
    }

    cout << sum << endl;
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