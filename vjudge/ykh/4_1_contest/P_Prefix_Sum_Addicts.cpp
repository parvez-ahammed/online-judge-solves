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
	vector<ll> s(n + 1);
	for (int i = n - k + 1; i <= n; ++i)
		cin >> s[i];
	if (k == 1)
	{
		cout << "Yes" << endl;
		return;
	}
	vector<ll> a(n + 1);
	for (int i = n - k + 2; i <= n; ++i)
		a[i] = s[i] - s[i - 1];
	if (!is_sorted(a.begin() + n - k + 2, a.end()))
	{
		cout << "No" << endl;
		return;
	}
	if (s[n - k + 1] > a[n - k + 2] * (n - k + 1))
	{
		cout << "No" << endl;
		return;
	}
	cout << "Yes" << endl;
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

