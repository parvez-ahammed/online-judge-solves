#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

void print(vector < pair < int , int >> v)
{
    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> r, l;
    rep(0, n)
    {
        int x , a;
        cin >> x >> a ;
        x < 0 ? l.push_back({x,a}) : r.push_back({x,a}); 
    }
    sort(l.begin() , l.end());
    reverse(l.begin() , l.end());

    sort(r.begin() , r.end());
    

    int minSize = min (r. size()  , l.size());

    ll sum = 0;
    rep(0 , minSize) sum += l[i].second;
    rep(0 , minSize) sum += r[i].second;

    sum+= (l.size() > r.size() ? l[minSize].second : 0);
    sum+= (r.size() > l.size() ? r[minSize].second : 0);




    cout << sum << endl;

    
    return 0;
}