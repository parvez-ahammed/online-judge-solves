#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);

   

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll gcd = v[0];
    vector <ll> v1(n);
    for (int i = 0; i < n/2; i++)
    {
        gcd = __gcd( gcd, abs(v[n-i-1]- v[i]));
        v1.push_back(gcd);

    }


    int max_vl = *max_element(v1.begin(), v.end());

    cout << max_vl << endl;

    // //cout << "GCD" << gcd << endl;
    // if (n == 1)
    // {
    //     cout << 0 << endl;
    //     return;
    // }

    // int li = n - 1;
    // min_v == 0 ? min_v++ : min_v;

    // for (ll i = max_v; i >= min_v; i--)
    // {
    //     bool possible = true;

    //     for (int j = 0; j < n / 2; j++)
    //     {
        
    //         if (v[j] == 0)
    //         {
    //             if (v[li - j] % i != 0)
    //             {
    //                 possible = false;
    //                 break;
    //             }
    //         }
    //         else if (v[li - j] == 0)
    //         {
    //             if (v[j] % i != 0)
    //             {
    //                 possible = false;
    //                 break;
    //             }
    //         }
    //         else if (v[j] % i != v[li - j] % i)
    //         {
    //             possible = false;
    //             break;
    //         }
    //     }

    //     if (possible)
    //     {
    //         cout << i << endl;
    //         return;
    //     }
    // }

    // cout << 0 << endl;

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