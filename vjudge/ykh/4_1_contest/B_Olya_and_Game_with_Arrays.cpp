#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define SORT(x) sort(x.begin() , x.end())





void solve()
{

    int n;
    cin >> n ;

    vector <int > a , b;
    int temp = n;
    while(temp--)
    {
        int m ;
        cin >> m;
        vector <int> v(m);

        for (int i = 0 ; i < m ;i++)
        cin >> v[i];
        SORT(v);

        a.push_back(v[0]);
        b.push_back(v[1]);
    }
    SORT(a);
    SORT(b);

  
    ll res = a[0];

    for (int i = 1 ; i < n  ; i++)
        res+= (ll)b[i];

        cout <<res << endl;


}

int32_t main() {

FAST;
int tc;
cin >>tc;
while(tc--)
solve();
    return 0;
}