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
    while (tc--)
    {
        int a = 0, b = 0, n = 0, sum = 0;

        int old_x = 0, old_y = 0;
        cin >> n;
        vector<int> pos_x;
        vector<int> pos_y;
        vector<int> neg_x;
        vector<int> neg_y;

        while (n--)
        {
            cin >> a >> b;
            if (a > 0 && b == 0)
            {
                pos_x.push_back(a);
            }
            else if (a == 0 && b > 0)
            {
                pos_y.push_back(b);
            }
            else if (a < 0 && b == 0)
            {
                neg_x.push_back(a * -1);
            }
            else if (a == 0 && b < 0)
            {
                neg_y.push_back(b * -1);
            }
        }
        sort(pos_x.begin(), pos_x.end());
        sort(pos_y.begin(), pos_y.end());
        sort(neg_x.begin(), neg_x.end());
        sort(neg_y.begin(), neg_y.end());

        int curr_pos = 0;
        int curr_cost = 0;
        int total_cost = 0;

        for (int i = 0; i < pos_x.size(); i++)
        {
            curr_cost += pos_x[i] - curr_pos;
            curr_pos = pos_x[i];
        }

        total_cost += curr_cost * 2;

       
        curr_pos = 0;
        curr_cost = 0;

        for (int i = 0; i < pos_y.size(); i++)
        {
            curr_cost += pos_y[i] - curr_pos;
            curr_pos = pos_y[i];
        }

        total_cost += curr_cost * 2;
         

        curr_pos = 0;
        curr_cost = 0;

        for (int i = 0; i < neg_x.size(); i++)
        {
            curr_cost += neg_x[i] - curr_pos;
            curr_pos = neg_x[i];
        }
        total_cost += curr_cost * 2;
       
        curr_pos = 0;
        curr_cost = 0;

        for (int i = 0; i < neg_y.size(); i++)
        {
            curr_cost += neg_y[i] - curr_pos;
            curr_pos = neg_y[i];
        }
        total_cost += curr_cost * 2;
         cout << total_cost << endl;
    }

    return 0;
}