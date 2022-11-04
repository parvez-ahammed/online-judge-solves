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
    int n;
    cin >> n;

    string ban = "BAN";

    for (int i = 1; i < n; i++)
    {
        ban += "BAN";
    }
    int till = 0;
    n % 2 == 0 ? till = n / 2 : till = (n / 2) + 1;
    cout << till << endl;
    int first = 0, second = ban.size() - 1;
    for (int i = 0; i < till; i++)
    {
        for (first = 0; first < ban.size(); first++)
            if (ban[first] == 'B')break;

        for (second = ban.size() - 1; second >= 0; second--)
            if (ban[second] == 'N')break; 
        
        swap(ban[first], ban[second]);
        cout << first + 1 << " " << second + 1 << endl;
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