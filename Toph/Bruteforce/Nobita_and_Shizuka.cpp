#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int solve()
{
    int ans = 0;

    string str;
    cin >> str;
    int n = str.size();
    vector <int> pos;
    for(int i = 0 ; i < n ;i++)
        if (str[i] == '1')
            pos.push_back(i);


    for (int i  = 1 ; i < pos.size()  ;i++)
        ans += ( pos[i] - pos[i-1] >= 2 ? 1 : 0);
    return ans;
}
int32_t main()
{

    FAST;

    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {

        cout << "Case " << i << ": " << solve() << endl;
    }
    return 0;
}