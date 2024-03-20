#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> a(n);

    int numberOfEven = 0;
    int numberOfOdd = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        numberOfEven += (a[i] % 2 == 0);
        numberOfOdd += (a[i] % 2 == 1);
    }

    int alicePoint = (numberOfOdd + 1) / 2;
    int bobPoint = numberOfOdd - alicePoint;

    if (numberOfOdd %2 == 0) {
        bobPoint += numberOfEven;
    }
    if (alicePoint > bobPoint) {
        alicePoint += numberOfEven;
    }
    if (alicePoint > bobPoint) {
        cout << "Alice" << endl;
    } else if (alicePoint < bobPoint) {
        cout << "Bob" << endl;
    } else {
        cout << "Draw" << endl;
    }
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