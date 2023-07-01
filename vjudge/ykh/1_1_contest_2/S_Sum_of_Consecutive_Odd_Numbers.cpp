#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()

{
    int tc;
    cin >> tc;

    long long int sum = 0;
    int a, b;
    while (tc--)
    {
        sum=0;
        cin >> a >> b;

        int m = min(a,b);
        int n = max(a,b);

        for (int i = (m+1) ; i < n ; i++ )
        {
            if (i%2 == 1)
            {

                //cout << i << " ";
                sum+=i;
            }
        }

        cout << sum<<endl;
    }

    return 0;
}