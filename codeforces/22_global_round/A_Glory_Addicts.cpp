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
    vector<pair<long long, long long>> a0;
    vector<pair<long long, long long>> a1;

    long long temp;

    long long sum0 = 0, sum1 = 0, totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(make_pair(0, temp));
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a[i].first = temp;
        if (a[i].second == 0)
        {
            sum0 += temp;
            a0.push_back(a[i]);
        }
        else
        {
            sum1 += temp;
            a1.push_back(a[i]);
        }
    }
    if (a0.size() == 0)
        cout << sum1 << "\n";
    else if (a1.size() == 0)
        cout << sum0 << "\n";
    else
    {
        Sort(a0);
        Sort(a1);
        totalSum += ((sum0 + sum1) * 2);
        if (a0.size() == a1.size())
        {
            a0[0].first < a1[0].first ? totalSum -= a0[0].first : totalSum -= a1[0].first;
        }
        else
        {
            if (a0.size() < a1.size())
            {
                totalSum -= a1[0].first;
                for (int i = 1; i < a1.size() - a0.size(); i++)
                    totalSum -= a1[i].first;
            }
            else
            {
                totalSum -= a0[0].first;
                for (int i = 1; i < a0.size() - a1.size(); i++)
                    totalSum -= a0[i].first;
            }
        }
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