#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> left(n);
    for(int i = 1 ; i < n ; i++)
    {
        if (a[i]- b[i]<= a[i-1])
        {
            left[i] += 1;
            left[i-1] += 1;
        }
    }

    vector<int> right(n);
    for(int i = 0 ; i < n-1 ; i++)
    {
        if (a[i]+ b[i] >= a[i+1])
        {
            right[i] += 1;
            right[i+1] += 1;
        }
    }

  

   

    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = left[i] + right[i];
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
       
    }
    cout << "YES"<< endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}