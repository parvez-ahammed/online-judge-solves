#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // take file input and output

    freopen("UOCSO.INP", "r", stdin);

    freopen("UOCSO.OUT", "w", stdout);

    int n;
    cin >> n;
 
    long long int cnt = 1;
 
    map<int, int> mp;
 
    for (int i = 2; i <= n; i++) {
        int num = i;
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                int cnt = 0;
                while (num % j == 0) {
                    cnt++;
                    num /= j;
                }
                mp[j] += cnt;
            }
        }
        if (num > 1) {
            mp[num]++;
        }
    }
 
    for (auto it : mp) {
        cnt = (cnt * (it.second + 1));
    }
 
    cout << cnt << endl;

    return 0;
}