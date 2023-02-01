#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

void solve()
{
    ll n;
    cin >> n;

    ll sum = 0, negOne = 0, posOne = 0;
    bool twoCons = false;
    int old;

    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;

        sum += curr;
        if (curr > 0)
        {
            posOne++;
        }

        else
        {
            if (i > 0 && !twoCons)
            {
                if (old == curr && curr == -1)
                    twoCons = true;
            }

            negOne++;
        }
        old = curr;
    }

    if (twoCons)
    {
        sum = posOne - negOne + 4;
    }
    else if (negOne == 0)
    {
        sum = posOne - 4;
    }

    cout << sum << endl;
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