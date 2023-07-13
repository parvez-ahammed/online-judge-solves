#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<long long> vp(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        vp[i] += vp[i - 1] + v[i];
    }

    int l = 1, r = n;
    int counter = 0;
    int response;
    while (r - l > 1)
    {
        int mid = (l + r + 1) / 2;
        cout << "? " << (mid - l) + 1 << " ";

        for (int i = l; i <= l + (mid - l); i++)
            cout << i << " ";
        cout << endl;

        cin >> response;

        long long rangeSum = vp[mid] - vp[l - 1];

        if (response == rangeSum)
            l = mid;
        else
            r = mid - 1;
            
        counter++;
        if (counter == 30)
            return;
    }

    cout << "? " << 1 << " " << l << endl;
    cin >> response;

    if (response != v[l])
    {
        cout << "! " << l << endl;
        return;
    }

    cout << "? " << 1 << " " << r << endl;
    cin >> response;
    if (response != v[r])
        cout << "! " << r << endl;
}
int main()
{

    int tc;
    cin >> tc;
    while (tc--)
        solve();
}