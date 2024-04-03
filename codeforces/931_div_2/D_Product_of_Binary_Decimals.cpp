#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> allBinDec;

    map<int, int> binaryDecimals;

    for (int i = 1; i <= 128; i++) {
        string binary = bitset<6>(i).to_string();

        cout << binary << endl;

        int decimal = stoi(binary);

        if (decimal == 0) {
            continue;
        }
        allBinDec.push_back(decimal);
        binaryDecimals[decimal] = 1;
    }

  

    if (binaryDecimals.find(n) != binaryDecimals.end()) {
        cout << "YES" << endl;
        return;
    }

    sort(allBinDec.begin(), allBinDec.end());

    for (int j = 0; j < 20; j++) {

        for (int i = 0; i < allBinDec.size(); i++) {
            int a = allBinDec[i];

            if (n % a == 0) {
                n /= a;
            }
        }
    }

    cout << (n == 1 ? "YES" : "NO") << endl;
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