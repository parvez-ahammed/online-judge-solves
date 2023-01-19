#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;
#define all(x) x.begin(),x.end();

void solve()
{
    int n;
    cin >> n;

    vector < pair < int , int >> b1;
    vector < pair < int , int >> b2;
    int l , r;
    for (int i = 0 ;i < n ; i++)
    {

        cin >> l >> r;
        int a = max(l, r);
        int b = min(l, r);
        b1.push_back(make_pair(a,b));
    }

     for (int i = 0 ;i < n ; i++)
    {

        cin >> l >> r;
        int a = max(l, r);
        int b = min(l, r);
        b2.push_back(make_pair(a,b));
    }

    for(int i = 0 ; i < n; i++)
    {

        if ( b1[i].first  != b2[i].first || b1[i].second  != b2[i].second )
        {

            cout << "no" << endl;
            return;
        }
    }

    cout << "yes" <<endl;
}


//cout <<"Case "<<t <<endl;


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    int tc;
    tc = 1;
    //cin >>tc;
    while(tc--)
    {
        solve();
    }
}