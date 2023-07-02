#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m && n > 0 && m > 0)
    {
        //cout << min(n, m) << " " << max(n, m) << endl;
        int sum = 0;
        for (int i = min(n, m); i <= max(n, m); i++)
        {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << endl;
    }
}