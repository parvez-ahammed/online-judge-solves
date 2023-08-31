#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, x;
    cin >> a >> b >> x;

    int choice = 1;

    string large = "", small = "";

    for (int i = 0; i < a; i++) {
        large += '0';
    }

    for (int i = 0; i < b; i++) {
        small += '1';
    }

    if (b > a) {
        swap(large, small);
        swap(a, b);
    }

    int dhukaiteHobe = (x / 2);

    vector<string> ans;

    for (int i = 0; i < dhukaiteHobe; i++) {
        string temp = "";

        temp += small.back();
        small.pop_back();
        temp += large.back();
        large.pop_back();

        ans.push_back(temp);
    }

    ans.insert(ans.begin(), large);

    if (x % 2 == 0)
        ans.insert(ans.begin() + 1, small);
    else
        ans.push_back(small);

    string res = "";

    for (int i = 0; i < ans.size(); i++) {
        res += ans[i];
    }

    cout << res << endl;

    int cntA = 0, cntB = 0, cntX = 0;

    for (int i = 0; i < res.size(); i++) {
        if (res[i] == '0') {
            cntA++;
        } else {
            cntB++;
        }

        if (i > 0) {
            if (res[i] != res[i - 1]) {
                cntX++;
            }
        }
    }

    //cout << cntA << " " << cntB << "  " << cntX << endl;

    return 0;
}