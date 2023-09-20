#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> v;
string p, t;

bool ok(int x)
{

    string res = t, temp = "";

    for (int i = 1; i <= x; i++) {
        res[v[i] - 1] = '0';
    }

    for (int i = 0; i < res.size(); i++) {
        if (res[i] != '0') {
            temp += res[i];
        }
    }

    if (temp.size() < p.size())
        return false;

    int j = 0;

    for (int i = 0; i < p.size(); i++) {

        while (p[i] != temp[j] and j < temp.size()) {
            j++;
        }

        if (j == temp.size()) {
            return false;
            break;
        } else {
            j++;
        }
    }

    return true;
}

int binSearch()
{
    int l = 0, r = t.size(), mid, ans = 0;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return ans;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t >> p;

    int sz = t.size();

    v.resize(sz + 1);

    for (int i = 1; i <= sz; i++) {
        cin >> v[i];
    }

    cout << binSearch() << endl;
    return 0;
}