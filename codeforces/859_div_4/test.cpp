#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {

        int n, k;
        cin >> n >> k;
        deque<int> v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n - 2 * k; i++)
        {
            sum += v.front();
            v.pop_front();
        }
        for (int i = 0; i < k; i++)
        {
            sum += (v[i] / v[i + k]);
        }
        cout << sum << endl;
    }
}