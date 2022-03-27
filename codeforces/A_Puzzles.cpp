
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    int n, m;
    int f[1001];

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> f[i];
        //cout << f[i] << " ";
    }
    // for(int i = 0 ; i < m+1 ; i++)
    // {
    //     cout << f[i] << " " ;
    // }
    cout << endl;
    sort(f, f + m, greater<int>());

    int min = 1001;

    for (int i = 0; (i + n) <= m; i++)
    {
        if (f[i] - f[i + (n-1)] < min)
        {
            min = f[i] - f[i + (n-1)];
            // cout << f[i] << "-" << f[i+3] ;
            
            
        }
    }
    cout << min << endl;

    // cout <<  min;
    return 0;
}