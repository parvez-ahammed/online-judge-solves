#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

double avg(int sum, int n)
{
    return (double)sum / (double)n;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    // for each subarray size greater than k we have to calculate their average

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // find the prefix sum

    vector<int> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + v[i - 1];
    }

    vector<double> ans;

    for (int i = 1; i <= n - k + 1; i++) {

        for (int j = i + k - 1; j <= n; j++) {
            int sum = prefix[j] - prefix[i - 1];
            //cout << "SIZE OF SUBARRAY : " << j -i +1 << " " << "SUM :" << sum << " " << endl;

            int sz = j -i +1;

            double avr = avg(sum, sz);

            ans.push_back(avr);
        }
    }

    cout << fixed << setprecision(20);

    sort(ans.rbegin(), ans.rend());
    cout << ans[0] << endl;
    return 0;
}

/*
4 3
3 4 1 2

-->2.666666666666667

*/