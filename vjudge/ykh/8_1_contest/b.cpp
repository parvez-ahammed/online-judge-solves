#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    vector<int> arr(5, 0);
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    int k;
    cin >> k;

    bool found = true;

    for (int i = 0; i < 5; i++) {

        
        for (int j = 0; j < 5; j++) {

        
            if (i != j) {
                if (abs(arr[i] - arr[j]) > k) {
                    found = false;
                }
            }
        }


    }

    cout << (found ? "Just Looking Like A Wow!" : "Not So Beautiful!") << endl;
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