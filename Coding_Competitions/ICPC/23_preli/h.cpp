#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

void printVector(vector<int>& v)
{

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
pair<int, vector<int>> subSumPossible(vector<int>& v, int subSum)
{
    vector<int> mark(v.size(), 0);

    int sum = 0;

    for (int i = 0; i < v.size(); i++) {

        if (sum + v[i] <= subSum) {
            sum += v[i];
            mark[i] = 1;
        }

        if (sum == subSum) {
            break;
        }
    }

    if (sum != subSum) {
        return { 0, v };
    } else {

        vector<int> temp;

        for (int i = 0; i < v.size(); i++) {
            if (mark[i] == 0) {
                temp.push_back(v[i]);
            }
        }
        return { 1, temp };
    }
}

bool canbeDividedInThreePart(vector<int> v, int sum)
{

    if (v.size() < 3) {
        return false;
    }
    sort(v.rbegin(), v.rend());

    for (int i = 1; i <= 3; i++) {

        auto subSum = subSumPossible(v, sum);
        if (subSum.first == 0) {
            return false;
        }
        v = subSum.second;
    }

    return true;
}

void solve()
{

    int n;
    cin >> n;

    vector<int> v(n + 1), pref(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        pref[i] = pref[i - 1] + v[i];
    }

    int ans = 0;
    vector<int> checkV;
    for (int i = 1; i <= n; i++) {

        checkV.push_back(v[i]);

        if (pref[i] % 3 == 0) {

            //cout << "i " << i  << " "<< v[i]  << " " << pref[i]<< endl;

            if (canbeDividedInThreePart(checkV, pref[i] / 3) or pref[i] == 0) {
                //printVector(checkV);
                cout << 1 << endl;

            }

            else {
                cout << 0 << endl;
            }
        } else
            cout << 0 << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": " << endl;
        solve();
    }
    return 0;
}