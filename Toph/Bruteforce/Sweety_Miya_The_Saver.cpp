#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"
const int N = 1000000;
vector<int> prime(N, 1);

void sieve()
{

    int limit = sqrt(N * 1.) + 2;
    prime[1] = 0;
    for (int i = 4; i <= N; i += 2)
        prime[i] = 0;

    for (int i = 3; i <= N; i += 2)
    {
        if (prime[i])
        {
            if (i <= limit)
            {
                for (int j = i * i; j <= N; j += (i * 2))
                    prime[j] = 0;
            }
        }
    }
}
void solve()
{
    int n;
    string str;
    cin >> n >> str;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        string temp = "";

        for (int j = i; j < i + 4; j++)
        {
            temp += str[j];
            v.push_back(stoi(temp));
        }
    }

    sort(v.rbegin(), v.rend());
    int ans = -1;
    for (auto val : v)
    {
        if (prime[val])
        {
            ans = val;
            break;
        }
    }

    if (ans == -1)
        cout << "This is a junk!" << endl;
    else
        cout << ans << endl;
}
int32_t main()
{

    FAST;

    sieve();
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}