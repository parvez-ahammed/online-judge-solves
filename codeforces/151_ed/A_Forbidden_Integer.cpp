#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc = 1;
    cin >> tc;
    while (tc--)
    {

        int n, k, x;
        cin >> n >> k >> x;

        bool comb1 = x != 1 , comb2 = (x != 2 && 2 <= k && n % 2 == 0) , comb3 = (x != 3 && 3 <= k && n % 2 == 1);
        if (comb1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
                cout << 1 << " ";
        }
        else if (comb2)
        {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++)
                cout << 2 << " ";
        }
        else if (comb3)
        {
            cout << "YES" << endl;
            cout << ((n - 3) / 2) + 1 << endl;
            for (int i = 0; i < ((n - 3) / 2); i++)
                cout << 2 << " ";
            cout << 3;
        }
        else
            cout << "NO";
        

        cout << endl;
    }
    return 0;
}