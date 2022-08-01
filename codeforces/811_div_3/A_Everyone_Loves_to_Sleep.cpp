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
priority_queue<pair<int, int>> pq;
int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, h, m;
        cin >> n >> h >> m;

        int waking_h;
        int waking_m;

        int min_h , min_m ;

        for (int i = 0; i < n; i++)
        {
            cin >> min_h >> min_m;
            if (min_h < h || (min_h == h && m > min_m))
            {
                h = 23 - h;
                m = 60 - m;
                cout << m << endl;
                cout << min_m << endl;
                min_h = h + min_h;
                min_m = m + min_m;
                cout << min_m << endl;
                cout << "hit1 " << endl;
            }
            else if (m == min_m && min_h >= h)
            {
                min_m = 0;
                min_h = min_h - h;
                cout << "hit1 1" << endl;
            }
            else if (min_m == 0 && min_h >= h)
            {

                min_h = min_h - h - 1;
                min_m = 60 - m;
                cout << "hit10 " << endl;
            }
            else if (h == min_h && min_m >= m)
            {
                min_h = 0;
                min_m = min_m - m;cout << "hit9 " << endl;
            }
            else if (min_m < m && h < min_h)
            {
                min_h = min_h - h - 1;
                min_m = min_m + m;cout << "hit8 " << endl;
            }
            else if (min_m > m && h < min_h)
            {
                min_h = min_h - h;
                min_m = min_m - m;cout << "hit7 " << endl;
            }

            pq.push(make_pair(-1 * min_h, -1 * min_m));
        }

        cout << pq.top().first * -1 << " " << pq.top().second * -1 << endl;
        priority_queue<pair<int, int>> ba;
        pq = ba;
    }

    return 0;
}