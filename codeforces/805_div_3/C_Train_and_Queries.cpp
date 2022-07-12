// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// /**-------Shortend Library-------*/

// #define vi vector<int>
// #define mii map<int, int>

// #define ff first
// #define ss second
// #define all(a) a.begin(), a.end()
// #define Sort(x) sort(x.begin(), x.end())
// #define SortR(x) sort(x.begin(), x.end(), greater<int>())
// #define Reverse(x) reverse(x.begin(), x.end())

// #define SortA(ar, s) sort(ar, ar + s)
// #define SortD(ar, s) sort(ar, ar + s, greater<int>())

// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) (a * (b / gcd(a, b)))
// #define sq(x) (x) * (x)
// #define mid(l, r) (l + (r - l) / 2)

// #define leftShift(p) (p << 1)
// #define rightShift(p) (p >> 1)

// #define min3(a, b, c) min(a, min(b, c))
// #define min4(a, b, c, d) min(a, min(b, min(c, d)))
// #define max3(a, b, c) max(a, max(b, c))
// #define max4(a, b, c, d) max(a, max(b, max(c, d)))
// #define pb(x) push_back(x)
// #define mod 1000000007
// #define precision(x) cout << fixed << setprecision(x)

// /**----data type----*/
// #define ll long long int
// #define llu unsigned long long int

// /**----Functions to use----**/

// ll powerLog(ll base, ll power)
// {
//     ll res = 1;
//     while (power)
//     {
//         if (power % 2)
//         {
//             res *= base;
//             power--;
//         }
//         else
//         {
//             base *= base;
//             power /= 2;
//         }
//     }
//     return res;
// }

// void show_vector(vector<vector<int>> myVector)
// {
//     for (int i = 0; i < myVector.size(); i++)
//     {
//         for (int j = 0; j < myVector[i].size(); j++)
//         {
//             cout << setw(6) << myVector[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

int main()
{
    int tc;

    cin >> tc;
    while (tc--)
    {
        int len;
        int station;

        cin >> len >> station;
        vector<int> v;
        int val;
        int arr[len];

        for (int i = 0; i < len; i++)

        {
            cin >> val;
            arr[i] = val;

            v.push_back(val);
        }

        vector<vector<int>> vv;

        while (!v.empty())
        {
            vv.push_back(v);
            v.erase(v.begin());
        }

//         // cout << vv.size() << endl;

//         // show_vector(vv);

//         int src, des;
//         while (station--)
//         {
//             cin >> src >> des;
//             int pos = -1;

//             for (int i = 0; i < vv.size(); i++)
//             {
//                 if (vv[i][0] == src)
//                 {
//                     pos = i;
//                     break;
//                 }
//             }

//             // cout << pos << endl;

//             if (pos == -1)

//             {
//                 cout << "NO"<<endl;
               
//             }
//             else 
//             {
//                 int freq =  count(vv[pos].begin(), vv[pos].end(), des) ;
//                  if (freq > 0)
//                  {
//                     cout << "YES"<<endl;
//                  }
//                  else 
//                  {
//                     cout << "NO"<<endl;
//                  }

//             }
//             // int src_pos = find(v.begin(), v.end(), src) - v.begin();
//             // int des_pos = find(v.begin() + src_pos, v.end(), des) - v.begin();

//             // if (src_pos != len && des_pos != len && src_pos <= des_pos)
//             // {
//             //     cout << "YES" << endl;
//             // }
//             // else
//             // {
//             //     cout << "NO" << endl;
//             // }
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;

    cin >> tc;
    while (tc--)
    {
        int len;
        int station;

        cin >> len >> station;
        vector<int> v;
        int val;

        for (int i = 0; i < len; i++)

        {
            cin >> val;
            v.push_back(val);
        }

        int src, des;

        while (station--)

        {
            cin >> src >> des;

            //cout << src << des << endl;
            int src_pos = find(v.begin(), v.end(), src) - v.begin();
            int des_pos = find(v.begin()+src_pos, v.end(), des) - v.begin();

            //cout << src_pos << des_pos << endl;

            if (src_pos != len && des_pos != len && src_pos <= des_pos)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout <<  "NO"<< endl;
            }
        }
    }

    return 0;
}