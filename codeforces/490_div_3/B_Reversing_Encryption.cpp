#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;
    cin >> n >> str;

    vector<int> v;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
        }
    }

    for (int i = 0; i < v.size(); i++) {
        int d = v[i];
        reverse(str.begin(), str.begin() + d);
    }

    cout << str << endl;

    return 0;
}