#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            ans = max(ans, temp - i-1);
        
        }
        cout << ans << '\n';
    }
    return 0;
}