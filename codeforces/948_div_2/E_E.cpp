#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 

    int n ;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // find all possible unordered triplets


    int res = 0;

    vector<pair<int , pair<int , int>>> ans;

    map< pair<int , pair<int , int>> , int> mp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                res += (a[i] ^ a[j] ^ a[k]);
                vector<int> v = {i , j , k};
                sort(v.begin() , v.end());
                pair <int , pair<int , int>> p = {v[0] , {v[1] , v[2]}};
                mp[p]++;    
            
                
            }
        }
    }

    for (auto x : mp) {
        cout << x.first.first << " " << x.first.second.first << " " << x.first.second.second << " " << x.second << endl;
    }

    cout << res << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
   // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}

/*





0 1 2 6
0 1 3 6
0 1 4 6
0 2 3 6
0 2 4 6
0 3 4 6

1 2 3 6
1 2 4 6
1 3 4 6

2 3 4 6


0 0 0 1
1 1 1 1
2 2 2 1
3 3 3 1
4 4 4 1


0 0 1 3
0 0 2 3
0 0 3 3
0 0 4 3

1 1 2 3
1 1 3 3
1 1 4 3

2 2 3 3
2 2 4 3

3 3 4 3

0 1 1 3
0 2 2 3
0 3 3 3
0 4 4 3

1 2 2 3
1 3 3 3
1 4 4 3


2 3 3 3
2 4 4 3

3 4 4 3




*/

/*

0 0 0 1
0 0 1 3
0 0 2 3
0 0 3 3
0 0 4 3
0 0 5 3
0 0 6 3
0 0 7 3
0 1 1 3
0 1 2 6
0 1 3 6
0 1 4 6
0 1 5 6
0 1 6 6
0 1 7 6
0 2 2 3
0 2 3 6
0 2 4 6
0 2 5 6
0 2 6 6
0 2 7 6
0 3 3 3
0 3 4 6
0 3 5 6
0 3 6 6
0 3 7 6
0 4 4 3
0 4 5 6
0 4 6 6
0 4 7 6
0 5 5 3
0 5 6 6
0 5 7 6
0 6 6 3
0 6 7 6
0 7 7 3
1 1 1 1
1 1 2 3
1 1 3 3
1 1 4 3
1 1 5 3
1 1 6 3
1 1 7 3
1 2 2 3
1 2 3 6
1 2 4 6
1 2 5 6
1 2 6 6
1 2 7 6
1 3 3 3
1 3 4 6
1 3 5 6
1 3 6 6
1 3 7 6
1 4 4 3
1 4 5 6
1 4 6 6
1 4 7 6
1 5 5 3
1 5 6 6
1 5 7 6
1 6 6 3
1 6 7 6
1 7 7 3
2 2 2 1
2 2 3 3
2 2 4 3
2 2 5 3
2 2 6 3
2 2 7 3
2 3 3 3
2 3 4 6
2 3 5 6
2 3 6 6
2 3 7 6
2 4 4 3
2 4 5 6
2 4 6 6
2 4 7 6
2 5 5 3
2 5 6 6
2 5 7 6
2 6 6 3
2 6 7 6
2 7 7 3
3 3 3 1
3 3 4 3
3 3 5 3
3 3 6 3
3 3 7 3
3 4 4 3
3 4 5 6
3 4 6 6
3 4 7 6
3 5 5 3
3 5 6 6
3 5 7 6
3 6 6 3
3 6 7 6
3 7 7 3
4 4 4 1
4 4 5 3
4 4 6 3
4 4 7 3
4 5 5 3
4 5 6 6
4 5 7 6
4 6 6 3
4 6 7 6
4 7 7 3
5 5 5 1
5 5 6 3
5 5 7 3
5 6 6 3
5 6 7 6
5 7 7 3
6 6 6 1
6 6 7 3
6 7 7 3
7 7 7 1

*/