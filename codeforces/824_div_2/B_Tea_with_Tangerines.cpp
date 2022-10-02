#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

ll count_p = 0;

void n_partition(vector<ll> v)
{
    ll min_val, max_val = 0;
    vector<ll> new_v;
    new_v.push_back(v[0]);

    for (int i = 1; i < v.size(); i++)
    {
        min_val = *min_element(new_v.begin(), new_v.end());
        max_val = *max_element(new_v.begin(), new_v.end());

        if (v[i] < min_val * 2)
            new_v.push_back(v[i]);

        if (v[i] > min_val * 2)
        {

            if (v[i] - min_val < min_val * 2)
            {
                count_p++;
                new_v.push_back(min_val);
                new_v.push_back(v[i] - min_val);
            }
            else if (v[i] / 2 < min_val * 2)
            {
                count_p++;
                new_v.push_back(v[i] / 2);
                new_v.push_back(v[i] - (v[i] / 2));

               
            }
            else
            {
            
                ll total_part = v[i] / max_val;
                count_p += total_part;
                ll reminder = v[i] % max_val;
                new_v.push_back(reminder);
            }
        }
    }

    
}



void solve()
{

    ll n;
    cin >> n;
    vector<ll> v(n, 0);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    Sort(v);

    if (n == 1)
        cout << 0 << "\n";
    else if (v[0] == 1)
    {
        cout << sum - v.size() << "\n";
    }
    else
    {
        n_partition(v);
        cout << count_p << "\n";
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

// cout << "\n\nFOR " << v[i] << "MIN VAL " << min_val << " MAX VALUE" << max_val << "HITTED"
//                  << "\n";
//             if (min_val * 2 < v[i])
//             {
//                 // cout << v[i] << " ";

//                 ll part1 = v[i] - min_val;
//                 ll part2 = min_val;

//                 if (part1 < min_val * 2 && part2 < min_val * 2)
//                 {
//                     count_p++;
//                     min_val = min(min_val, min(part1, part2));
//                     max_val = max(max_val, max(part1, part2));
//                     cout << "PART2 "
//                          << "\n";

//                     cout << min_val << "MX VAL" << max_val << "\n\n";
//                 }
//                 else
//                 {
//                     part1 = v[i] - max_val;
//                     part2 = max_val;

//                     if (part1 < min_val * 2 && part2 < min_val * 2)
//                     {
//                         count_p++;
//                         min_val = min(min_val, min(part1, part2));
//                         max_val = max(max_val, max(part1, part2));
//                         cout << "PART3 "
//                              << "\n";
//                     }

//                     else
//                     {
//                         part1 = v[i] / 2;
//                         part2 = v[i] - part1;

//                         if (part1 < min_val * 2 && part2 < min_val * 2)
//                         {
//                             count_p++;
//                             min_val = min(min_val, min(part1, part2));
//                             max_val = max(max_val, max(part1, part2));
//                             cout << "PART34 "
//                                  << "\n";
//                         }
//                         else
//                         {
//                             cout << part1 << " " << part2 << "\n";
//                             cout << "PART4 "
//                                  << "\n";
//                         }
//                     }
//                 }
//             }