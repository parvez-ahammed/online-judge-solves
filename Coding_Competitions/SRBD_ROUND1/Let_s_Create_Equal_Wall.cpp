#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**-------Shortend Library-------*/

#define vi queue<int>
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

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    ll sum1 = 0;
    ll sum2 = 0;
    ll sum3 = 0;
    vi v1;
    vi v2;
    vi v3;
    int temp;
    for (int i = 0; i < n1; i++)

    {
        cin >> temp;
        v1.push(temp);
        sum1 += temp;
    }

    for (int i = 0; i < n2; i++)

    {
        cin >> temp;
        v2.push(temp);
        sum2 += temp;
    }

    for (int i = 0; i < n3; i++)

    {
        cin >> temp;
        v3.push(temp);
        sum3 += temp;
    }

    ll sumv;

    if (sum1 == sum2 && sum1 == sum3 && sum3 == sum2)
        cout << sum1 << endl;
    else
    {

        int i = 0;
        while (true)
        {
            if (sum1 == sum2 && sum1 == sum3 && sum3 == sum2)
                break;
            else
            {
                sumv = max3(sum1, sum2, sum3);

                if (sumv == sum1)
                {
                    sumv -= v1.front();
                    sum1 -= v1.front();
                    v1.pop();
                }
                else if (sumv == sum2)
                {
                    sumv -= v2.front();
                    v2.pop();
                    sum2 -= v2.front();
                }
                else if (sumv == sum3)
                {
                    sumv -= v3.front();
                    sum3 -= v3.front();
                    v3.pop();
                }
            }
        }

        cout << sum1 << endl;
    }

    return 0;
}