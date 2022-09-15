#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long int tc;
    cin >> tc;
    while (tc--)
    {
        unsigned long long int n;
        cin >> n;
        unsigned long long int cnt = 1;
        for (unsigned long long int i = 0; i < n; i++)
        {
            cout << cnt << " ";
            cnt *= 2;
        }
        cout << endl;
    }
    return 0;
}
