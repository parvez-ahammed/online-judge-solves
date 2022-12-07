
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;

//     cin >> tc;

//     int i = 1;
//     while (tc--)
//     {
//         int a, b, c, k;

//         cin >> a >> b >> c >> k;

//         int median = (a + b + c) / 3;

//         int can_give = 0, can_take = 0;

//         bool possible = true;

//         int new_a = a, new_b = b, new_c = c;

//         if (a > median)
//         {
//             can_give += (a - median);
//             new_a = median;
//         }

//         if (b > median)
//         {
//             can_give += (b - median);
//             new_b = median;
//         }

//         if (c > median)
//         {
//             can_give += (c - median);
//             new_c = median;
//         }

//         if (a < median)
//         {
//             can_take += (median - a);
//             if ((median - a) % k != 0)
//                 possible = false;
//         }

//         if (b < median)
//         {
//             can_take += (median - b);
//             if ((median - b) % k != 0)
//                 possible = false;
//         }

//         if (c < median)
//         {
//             can_take += (median - c);
//             if ((median - c) % k != 0)
//                 possible = false;
//         }

//         if (can_give == can_take && (can_give % k) == 0 && possible )
//         {

//             cout << "Case " << i << ": Peaceful" << endl;
//         }

//         else
//             cout << "Case " << i << ": Fight" << endl;
//         i++;
//     }

//     return 0;
// }

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

int main()
{

    int tc;

    cin >> tc;

    // 3 5 2 2
    int i = 1;
    while (tc--)
    {
        int a, b, c, k;

        cin >> a >> b >> c >> k;
        int curr_max, curr_min;

        int j = 0;
        int median = (a + b + c) / 3;

        while (true)
        {
            cout << a << " " << b << " " << c << endl;
            if (a >= b && a >= c && a != median)
            {
                a -= k;
                if (b <= c)
                    b += k;
                else
                    c += k;
            }

            else if (b >= c && b != median)
            {
                b -= k;
                if (a <= c)
                    a += k;
                else
                    c += k;
            }
            else
            {
                c -= k;
                if (a <= b)
                    a += k;
                else
                    b += k;
            }

            if ((a == b && a == c && b == c) || (a <= k && b <= k && c <= k))
                break;
        }

        if (a == b && b == c)
        {
            cout << "Case " << i << ": Peaceful" << endl;
        }
        else
            cout << "Case " << i << ": Fight" << endl;

        i++;
    }

    return 0;
}