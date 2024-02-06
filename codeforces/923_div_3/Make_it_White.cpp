#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int N = 1e6 + 9;
const int mod = 1e9 + 7;

void solve(int tc)
{
    int n;cin >>n; 
    string s; cin >>s; 
    int pos1 = s.find('B');
    int pos2 = s.rfind('B');
    cout << (pos2 - pos1 + 1) << endl;
}

int32_t main()
{
    FAST;  
    int tt = 1;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}
