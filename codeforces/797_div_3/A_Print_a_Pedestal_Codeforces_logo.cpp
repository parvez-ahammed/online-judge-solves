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

    int tc;
    cin >> tc;
    int n;

    int a, b, c;
    int curr_n;

    while (tc--)
    {
        cin >> n;

        if (n % 3 == 0)
        {
            if (n > 6)
            {
                b = (n / 3) + 1;
            }
            else
            {
                b = (n / 3) + 1;
            }

            curr_n = n - b;

            if (curr_n % 2 == 0)
            {
                a = (curr_n / 2) + 1;
                c = curr_n - a;
            }
            else
            {
                a = ceil((curr_n / 2.0));
                c = curr_n - a;
            }
        }
        else if (n % 3 == 1)
        {

            b = (n / 3) + 2;

            curr_n = n - b;

            if (curr_n > 3)
            {
                a = ceil(curr_n / 2.0) + 1;
            }
            else
            {
                a = ceil((curr_n / 2.0));
            }

            c = curr_n - a;
        }
        else if (n % 3 == 2)
        {
            b = (n / 3) + (n % 3);
            curr_n = n - b;
            a = (curr_n / 2) + 1;
            c = curr_n - a;
        }

       // cout << a << " " << b << " " << c << " " << a + b + c << endl;
        cout << a << " " << b << " " << c  << endl;
    }

    return 0;
}