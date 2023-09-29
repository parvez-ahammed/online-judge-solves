#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int MAX = 1e5;
bool boro(int a)
{
    return a > MAX;
}

void printres()
{
    cout << -1 << endl;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int temp = k;
    int oddThakteParbe = n / 2;
    int evenThakteParbe = n - oddThakteParbe;

    int minVal = oddThakteParbe + (evenThakteParbe * 2);
    ll max = (n * 99999LL) + 2;
    int cnt = 0;

    int val = k / n;

    if (max < k or k < minVal) {
        printres();
        return;
    }

    if (oddThakteParbe % 2 != k % 2) {
        printres();
        return;
    }

    vector<int> v;

    if (val % 2 == 0) {
        val--;
    }

    if (boro(val)) {
        printres();
        return;
    }

    for (int i = 1; i <= oddThakteParbe; i++) {

        v.push_back(val);
        k -= val;
        cnt += val;
    }

    // //cout << val << " ";

    // //val = k / evenThakteParbe;
    // // if (val % 2 == 1) {
    // //     val--;
    // // }
    // val++;

    if (boro(val)) {
        printres();
        return;
    }

    int done = 1;
    while (k / (evenThakteParbe - done) > 4) {

        v.push_back(val);
        k -= val;
        cnt += val;
        done++;
    }

    cout << "HIT" << endl;

    // //cout << val << " ";
    // int last = k;

    // int printBaki = n - v.size();
    // //cout << last << " " << n - v.size() << endl;

    // for (int i = 1; i < printBaki; i++) {
    //     v.push_back(2);
    //     k -= 2;
    //     cnt += 2;
    // }
    // //cout << k << endl;
    // v.push_back(k);
    // cnt += k;

    // v.push_back(last);

    // if (boro(last)) {
    //     cout << -1 << endl;
    //     return;
    // }

    // for (int i = 0; i < v.size(); i++) {
    //      cout << v[i] << " ";
    // }
    // cout << endl;

    // cout << boolalpha << (cnt == temp) << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}