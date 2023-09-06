#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int binSearch(vector<int>& a, int x)
{
    int l = -1, r = a.size();

    while (r > l + 1) {
        int m = (l + r) / 2;

        if (a[m] >= x)
            r = m;
        else
            l = m;
    }

    return r;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    while (k--) {
        int x;
        cin >> x;

        int indice = binSearch(a, x);

        if (a[indice] == x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}