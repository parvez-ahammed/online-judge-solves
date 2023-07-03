#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int x, a, b;
    cin >> x >> a >> b;
    --x;
    --a;
    --b;

    if (x < v.size())
        v.erase(v.begin() + x);

    if (b < v.size())
        v.erase(v.begin() + a, v.begin() + b);
    cout << v.size() << '\n';
    for (auto x : v)
        cout << x << ' ';

    cout << '\n';
    return 0;
}
