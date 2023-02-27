#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**-------Shortend Library-------*/

#define vi vector<int>
#define mii map<int, int>

#define ff first
#define ss second
#define all(a) a.begin(), a.end()
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())

#define SortA(ar, s) sort(ar, ar + s)
#define SortD(ar, s) sort(ar, ar + s, greater<int>())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)

#define leftShift(p) (p << 1)
#define rightShift(p) (p >> 1)

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb(x) push_back(x)
#define mod 1000000007
#define precision(x) cout << fixed << setprecision(x)

/**----data type----*/
#define ll long long int
#define llu unsigned long long int

/**----Functions to use----**/

ll powerLog(ll base, ll power)
{
    ll res = 1;
    while (power)
    {
        if (power % 2)
        {
            res *= base;
            power--;
        }
        else
        {
            base *= base;
            power /= 2;
        }
    }
    return res;
}

int main()
{

    int n;
    cin >> n;

    ll sum_of_all = (((n * n)) + n) / 2;

    cout << sum_of_all << endl;

    if (sum_of_all % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {

        ll wanted_sum = sum_of_all / 2;

        vi v1;
        vi v2;
        cout << "YES" << endl;
        for (int i = n; i >= 1; i--)
        {
            if (wanted_sum - i >= 0)

            {
                wanted_sum -= i;
                v1.push_back(i);
            }
            else
            {
                v2.push_back(i);
            }
        }

        cout << v1.size() << endl;
        Sort(v1);
        // for (int i = 0; i < v1.size(); i++)
        // {
        //     cout << v1[i] << " ";
        // }
        // cout << endl;

        cout << v2.size() << endl;
        // Sort(v2);
        // for (int i = 0; i < v2.size(); i++)
        // {
        //     cout << v2[i] << " ";
        // }
    }

    return 0;
}