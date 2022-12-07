#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, x;

    int long_sequence = 0;
    int previous_long_seq = 0;

    while (t--)

    {
        cin >> n >> x;
        int a[n + 1];
        long_sequence = 0;
        previous_long_seq = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i++)
        {
            if (a[i + 1] >= a[i])
            {
                long_sequence++;
            }
            else if (a[i + 1] < a[i] && (i+1 != x) )
            {
                swap( a[i],a[i+1]);
                long_sequence++;
            }
        }

        if (long_sequence > previous_long_seq)
        {
            cout << long_sequence << endl;
        }
        else
        {
            cout << previous_long_seq << endl;
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     cout << a[i] << " " ;
        // }
        
    }

    return 0;
}