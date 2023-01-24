#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

void solve()
{
    ll a1, a2, a3, a4;

    cin >> a1 >> a2 >> a3 >> a4;

    ll ans = 0;

    if (a1 == 0)
    {
        if (a4 > 0 or a2 > 0 or a3 > 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    else
    {

        if (a2 != 0 && a3 != 0)
        {
            (a1 < a4) ? a1 = (ll)(2 * a1) + 1 : a1 = (ll)(a1 + a4);
            ans = (ll)min(a2, a3) * 2;
            cout << a1 + (ll)(ans) << endl;
        }

        else if (a2 == 0 && a3 == 0)
        {
            (a1 < a4) ? a1 = (ll)(2 * a1) + 1 : a1 = (ll)(a1 + a4);
            cout << a1 << endl;
        }
        else
        {

            ll second_ans = 0;

            if (a4 <= a1)
            {
              //  cout << "HIT" << endl;
                second_ans = (a1-a4)+ 1;
            }

            (a1 < a4) ? a1 = (ll)(2 * a1) + 1 : a1 = (ll)(a1 + a4);

            cout << a1 + second_ans << endl;
        }
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}

// AC CASES

/*
https://codeforces.com/contest/1792/problem/B
PROBLEM LINK 
4
5 0 0 0
0 0 0 5
2 5 10 6
3 0 0 7
5
1
15
7

1
1 1 1 1

4

8
2 3 3 2
2 3 3 3
1 1 1 1
100000000 100000000 100000000 100000000
800000000 800000000 800000000 800000000
2 3 6 9
0 0 0 0
0 1 1 1

10 
11
4
400000000
3200000000
11
0
1

3
0 2 2 0
0 0 0 0
1 0 0 1

1
0
2


7
1 1 0 1
1 0 1 1
3 2 0 4
2 2 0 2
2 3 0 2
2 0 3 2
4 3 0 3

3
3
7
5
5
5
9

1
4 3 0 3

9


*/