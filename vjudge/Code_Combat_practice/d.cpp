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

void solve(int n)
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    int second;

    cout << "Discarded cards:"
         << " ";
    while (q.size() > 1)
    {
        cout << q.front();
        if (q.size() > 2)

            cout << ", ";
        else
            cout << " ";
        q.pop();

        if (!q.empty())
        {
            second = q.front();
            q.push(second);
            q.pop();
        }
    }
    cout << "\nRemaining card: " << second << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        else
            solve(n);
    }
    return 0;
}