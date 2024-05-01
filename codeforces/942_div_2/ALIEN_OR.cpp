#include <bits/stdc++.h>

using namespace std;

void print(bool possible)
{
    cout << (possible ? "YES" : "NO") << endl;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bitset<100> result;

    for (int i = 0; i < n; i++) {

        int cnt = 0;
        int onBit = -1;
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] == '1') {
                onBit = j;
                cnt++;
            }
        }

        if (cnt == 1) {
            if (!result.test(onBit)) {
                result.set(onBit);
            }
        }
    }

    bool possible = true;
    for (int i = 0; i < k; i++) {
        if (!result.test(i)) {
            possible = false;
            break;
        }
    }

    print(possible);
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}