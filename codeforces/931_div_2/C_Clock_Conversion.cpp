#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    string time;
    cin >> time;
    int hh = stoi(time.substr(0, 2));
    int mm = stoi(time.substr(3, 2));

    string ampm;
    if (hh == 0) {
        ampm = "AM";
        hh = 12;
    } else if (hh < 12) {
        ampm = "AM";
    } else if (hh == 12) {
        ampm = "PM";
    } else {
        ampm = "PM";
        hh -= 12;
    }

    cout << setfill('0') << setw(2) << hh << ":" << setfill('0') << setw(2) << mm << " " << ampm << endl;
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