#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;
    int n, m, k;
    string a;

    string b;
    while (tc--)
    {
        cin >> n >> m >> k;

        cin >> a >> b;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        //cout << a << " " << b << endl;
        string c;
        int p = 0;
        int count_a, count_b;

        count_a = 0;
        count_b = 0;
        bool swap = true;
        // cout << "Count a in while =  " << count_a << endl;
        for (int i = 0; count_a <= k && count_b <= k && m != 0 && n != 0;)
        {
            // cout << "Count a in for loop =  " << count_a << endl;

            if (a[i] <= b[i] && count_a < k && swap)
            {
                c[p] = a[i];
               // cout << c[p] << " " << p << endl;
                p++;
                count_a += 1;
                a.erase(0, 1);
                n--;

                if (k == 1)
                {
                    swap = false;
                }
                // cout << "Count a in for loop =  " << count_a << endl;
            }
            else if (a[i] >= b[i] && count_b < k && swap)
            {
                c[p] = b[i];
                //cout << c[p] << " " << p << endl;
                p++;
                count_b++;
                b.erase(0, 1);
                m--;
                if (k == 1)
                {
                    swap = false;
                }
            }
            // cout << "Count a in if else =  " << count_a << endl;
            if (n == 0 || m == 0)
            {
                break;
            }
            else if (count_a == k)
            {

                c[p] = b[0];
                b.erase(0, 1);
                //cout << c[p] << " " << p << " Swap in if else " << endl;
                p++;

                count_a = 0;
                count_b = 0;

                if (k == 1)
                {
                    count_a = 0;
                    count_b = 1;
                }
                m--;
            }
            else if (count_b == k)
            {
                c[p] = a[0];
                a.erase(0, 1);
                //cout << c[p] << " " << p << " Swap in if else " << endl;
                p++;

                count_b = 0;
                count_a = 0;
                n--;

                if (k == 1)
                {
                    count_a = 1;
                    count_b = 0;
                }
            }
        }

        for (int i = 0; i < p; i++)
        {
            cout << c[i];
        }
        cout << endl;
    }

    return 0;
}