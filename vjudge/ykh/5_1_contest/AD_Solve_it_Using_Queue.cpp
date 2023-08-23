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
    string word;
    cin >> word;
    word.insert(word.begin(), '#');

    vector<int> v;
    queue<int> q;

    int width = (2 * k) + 1;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (islower(word[i]))
        {
            v.push_back(word[i] - 'a' + 1);
        }
        else
        {
            v.push_back(word[i] - 'A' + 1 + 26);
        }

        if (i <= width)
        {
            q.push(v.back());
            sum += v.back();
        }
    }

    int ans = max(0, sum);
    int pos = k + 1;

    if (k >= n)
        pos = 1;

    int curr = pos;


    // sliding window technique
    for (int i = width; i < n; i++)
    {

        q.push(v[i]);

        curr++;
        sum += q.back();
        sum -= q.front();

        q.pop();

        if (sum > ans)
        {
            pos = curr;
            ans = sum;
        }
    }

    cout << pos << " " << ans << endl;
}
int32_t main()
{

    FAST;

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}