#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , k;
    cin >> n >> k ;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    int left = 0;
    int right = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] <= k) {
            left++;
        }
        else {
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (v[i] <= k) {
            right++;
        }
        else {
            break;
        }
    }

    if (left + right >= n) {
        cout << n << endl;
        return 0;
    }

    cout << left + right << endl;

    
    return 0;
}