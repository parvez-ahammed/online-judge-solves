#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

void solve()
{

    long long n;

    cin >> n;
    vector<pair<long long, long long>> a;
    vector<long long> sum0v, sum1v;
    long long temp;

    long long sum0 = 0, sum1 = 0, totalSum = 0, zeros = 0, ones = 0;

    long long minel = 10e9;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(make_pair(0, temp));
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        temp < minel ? minel = temp : temp = temp;
        a[i].first = temp;
        if (a[i].second == 0)
        {
            sum0 += temp;
            zeros += 1;
            sum0v.size() == 0 ? sum0v.push_back(temp) : sum0v.push_back(sum0v[sum0v.size() - 1] + temp);
        }
        else
        {
            sum1 += temp;
            ones += 1;
            sum1v.size() == 0 ? sum1v.push_back(temp) : sum1v.push_back(sum1v[sum1v.size() - 1] + temp);
        }
    }
    if (zeros == 0 || ones == 0)
        zeros == 0 ? cout << sum1 << "\n" : cout << sum0 << "\n";
    else
    {
        totalSum += ((sum0 + sum1) * 2);
        zeros == ones ? totalSum -= minel : zeros < ones ? totalSum -= sum1v[ones - zeros - 1]
                                                         : totalSum -= sum0v[zeros - ones - 1];
        cout << totalSum << "\n";
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}