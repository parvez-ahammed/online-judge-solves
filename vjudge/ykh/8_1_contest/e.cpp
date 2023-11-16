#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define endl "\n"

vector<ll> devilInt;

// solution is kth devilber having prime divisors only 2 , 3 , 5
// so just have to find the order of increasiing

void init()
{
    devilInt.push_back(0);
    devilInt.push_back(1);

    int two = 1, three = 1, five = 1;
    int count = 0;
    while (count <= 10005) {
        ll next = min({ 2 * devilInt[two], 3 * devilInt[three], 5 * devilInt[five] });
        devilInt.push_back(next);

        if (next == 2 * devilInt[two])
            two++;
        if (next == 3 * devilInt[three])
            three++;
        if (next == 5 * devilInt[five])
            five++;

        count++;
    }
}
void solve()
{
    int k;
    cin >> k;

    cout << devilInt[k] << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    init();
    int tc = 1;

    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}