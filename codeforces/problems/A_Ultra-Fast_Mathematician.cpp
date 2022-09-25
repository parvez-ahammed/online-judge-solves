#include <bits/stdc++.h>
using namespace std;

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define nl '\n'

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
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

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

    string str, second_str, carry = "0", final_str;

    cin >> str >> second_str;

    bool zero_zero, one_one, one_zero, is_carry;

    for (int i = str.size() - 1; i >= 0; i--)
    {
        zero_zero = str[i] == second_str[i] ? (str[i] == '0' ? true : false) : false;
        one_one = str[i] == second_str[i] ? (str[i] == '1' ? true : false) : false;
        one_zero = str[i] != second_str[i] ? true : false;
        is_carry = carry[0] == '1' ? true : false;

        if (zero_zero)
        {
            if (is_carry)
            {
                final_str.insert(0, "1");
                carry[0] == '0';
            }
            else

            {
                final_str.insert(0, "0");
                carry[0] == '0';
            }
        }
        else if (one_one)
        {
            if (is_carry)
            {
                final_str.insert(0, "1");
                carry[0] == '1';
            }
            else

            {
                final_str.insert(0, "0");
                carry[0] == '0';
            }
        }
        else if (one_zero)
        {
            if (is_carry)
            {
                final_str.insert(0, "0");
                carry[0] == '1';
            }
            else

            {
                final_str.insert(0, "1");
                carry[0] == '0';
            }
        }
    }

    cout << final_str;

    return 0;
}