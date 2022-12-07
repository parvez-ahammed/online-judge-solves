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

int solve()
{
    int n, m;
    cin >> n >> m;
    int temp = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> temp >> temp;
    }

    int s, e;
    cin >> s >> e;

    
        return 1;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    int i = 1;

    while (tc--)
    {
        int number_of_path = solve();

        cout << "Case " << i << ": " << number_of_path << endl;
        i++;
    }
    return 0;
}