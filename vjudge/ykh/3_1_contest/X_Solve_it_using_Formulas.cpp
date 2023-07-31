#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int32_t main()
{

    FAST

        int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        ll normal_sum = ((n * (n + 1)) / 2);
        ll square_normal_sum = (normal_sum * normal_sum);

        ll series_sum = 0;

        for (int i = 1; i <= n; i++)
            series_sum += (i * i * 1ll);

        cout << abs(square_normal_sum - series_sum) << endl;
    }
    return 0;
}