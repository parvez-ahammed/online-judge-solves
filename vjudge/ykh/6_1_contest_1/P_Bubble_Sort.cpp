#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = 0 , cnt = 0;

    for (int i = 0; i < n; i++) {


        cnt = 0;
        for (int j = 0; j < n - 1; j++) {

            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                cnt++;
            }
        }

        if (cnt == 0)
            break;

        ans += cnt;
    }

    cout << "Array is sorted in "<< ans << " swaps."<< endl;
    cout << "First Element: " << v[0] << endl;
    cout << "Last Element: " << v[n - 1] << endl;
    return 0;
}