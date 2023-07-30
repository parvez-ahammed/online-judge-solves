#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

vector<int> fac(11, 1);

int calcFac(int i)
{
    if (i == 1)
        return fac[i] = 1;
    return fac[i] = (i * calcFac(i - 1));
}

bool isCurious(int i)
{

    int n = i;

    ll sum = 0;
    while (i)
    {
        int dig = i % 10;

        sum += fac[dig];

        i /= 10;
    }

    return (sum % n == 0);
}
int32_t main()
{
    calcFac(10);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ll cnt = 0;
    for (int i = 10; i < n; i++)
    {
        cnt += (isCurious(i) ? i : 0);

        if (isCurious(i))
            cout << i << " ";
    }

    cout << cnt << endl;
    return 0;
}