
#include <bits/stdc++.h>
using namespace std;
const int N = 200002;
int s[N];
int n;
long long int c;

long long int to_sum(long long int x)
{
    long long int sum1 = 0;

    for (int i = 0; i < n; i++)
    {
        long long int side = s[i] + x;
        long long int area = side * side;
        sum1 += area;
        if (sum1 > c)
            break;
    }
    return sum1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> c;

        for (int i = 0; i < n; i++)
            cin >> s[i];

        int ans = 0;
        long long int l = 0;
        long long int r = sqrt(c) + 10;

        while (l <= r)
        {
            long long int mid = (l + r) / 2;

            long long int sum = to_sum(mid);

            if (c == sum)
            {
                cout << mid / 2 << '\n';
                break;
            }

            else if (c < sum)
                r = mid - 1;

            else
                l = mid + 1;
        }
    }
}
