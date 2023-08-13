#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), max_till(n);

    ll sum = 0;

    bool has_one = false;

    for (int i = 0; i < n; i++)

        cin >> a[i], max_till[i] = a[i];

    for (int i = n - 2; i >= 0; i--)
    {

        if (max_till[i] <= max_till[i + 1])
            max_till[i] = max_till[i + 1] + 1;
    }

    vector<int> valid;

    for (int i = 0; i < n; i++)
    {

        int need_move = INT_MAX;

        vector<int> temp = max_till;

        while (need_move > k)
        {
            need_move = 0;
            for (int j = i; j < n; j++)
            {
                if (temp[j] <= a[j])
                    break;
                need_move += temp[j] - a[j];
            }

            for (int j = i; j < n; j++)
                temp[i]--;
        }

        cout << need_move << endl;

        valid.push_back(temp[i]);
    }

    sort(valid.begin(), valid.end());

    cout << valid.back() << endl;
}
int32_t main()
{

    FAST;

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}