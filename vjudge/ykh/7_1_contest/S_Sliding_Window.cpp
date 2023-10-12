#include <iostream>
#include <set>
#include <vector>
using namespace std;

#define ll long long int
#define endl "\n"

int main()
{

    ll n, k;
    cin >> n >> k;

    multiset<ll> ms;
    vector<ll> arr(n + 1), mx, mn;

    for (ll i = 1; i <= n; i++) {
        cin >> arr[i];
        ms.insert(arr[i]);
        if (i >= k) {
            mx.push_back(*ms.rbegin());
            mn.push_back(*ms.begin());

            ms.erase(ms.find(arr[i - k + 1]));
        }
    }

    ll sz = mx.size();
    for (ll i = 0; i < sz - 1; i++) {
        cout << mn[i] << " ";
    }

    if (sz > 0)
        cout << mn.back() << endl;

    for (ll i = 0; i < sz - 1; i++) {
        cout << mx[i] << " ";
    }

    if (sz > 0)
        cout << mx.back() << endl;

    return 0;
}