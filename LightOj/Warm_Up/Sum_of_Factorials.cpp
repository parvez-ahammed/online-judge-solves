#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
vector < ll> v(25);

void solve()
{
    ll n;
    cin >> n;
    vector<int> ans;
    for (int i = 20 ; i >= 0 ; i--) 
    {
        //cout << n << " " << v[i] << endl;
        if ( n >= v[i])
        {
            //cout << "HIT"<< endl;
            ans.push_back(i);
            n-=v[i];
            

        }
    }
    Reverse(ans);

    if(n != 0) cout << "impossible";
    else 
    {
        for (int i= 0 ; i <ans.size(); i++)
        {
            cout << ans[i]<< "!";
            if (i +1 != ans.size()) cout << "+";
        }
        
    } 
    cout << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    v[0]= 1;
    for (int i = 1 ; i <= 20 ; i++) v[i] = ((v[i-1]) * i ) ;

    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}