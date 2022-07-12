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

void show_vector(vector<vector<int>> myVector)
{
    cout << "Vector is shown below " << endl;
    for (int i = 0; i < myVector.size(); i++)
    {
        for (int j = 0; j < myVector[i].size(); j++)
        {
            cout << setw(6) << myVector[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        int sz;

        cin >> sz;
        vector<int> v[sz];
        vector<int> tr[sz];

        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                char temp;
                cin >> temp;

                if (temp == '0')
                    v[i].push_back(0);
                else
                {
                    v[i].push_back(1);
                }
            }
        }

        vector<int> check[sz];

        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                check[i].push_back(0);
            }
        }

        

        int count = 0;

        

        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                if (v[j][i] == v[i][sz - 1 - j])
                {
                    check[j][i] = 1;
                    check[i][sz - 1 - j] = 1;
                }
                else
                {
                    if (check[i][sz - 1 - j] != 1)
                    {
                        v[i][sz - 1 - j] = v[j][i]; 
                    }
                    else if (check[j][i] != 1)
                    {
                        v[j][i] = v[i][sz - 1 - j];
                    }
                    check[i][sz - 1 - j] = 1;
                    check[j][i] = 1;
                    count++;
                }
            }
        }

      

        cout << count;
        cout << endl;
    }

    return 0;
}