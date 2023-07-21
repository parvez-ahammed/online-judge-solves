#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll maximumSubArraySum(vector<ll> prefix)
{

    ll ans = LLONG_MIN;
    ll curr_min = 0;
    for (int i = 1; i < prefix.size(); i++)
    {
        ans = max(ans, prefix[i] - curr_min);
        curr_min = min(curr_min, prefix[i]);
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;
    vector<int> v(n + 1);

    vector<ll> prefix(n + 1);
    ll minV = 0;
    for (int i = 1; i <= n; i++)
    {

        cin >> v[i];
        prefix[i] = prefix[i - 1] + v[i];
    }

    cout << maximumSubArraySum(prefix) << endl;
}