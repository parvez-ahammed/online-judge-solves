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


void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);

    map<int, int> mp;
    bool has_one = false;
    int min_val = INT_MAX;
    int min_index = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        if (v[i] == 1)
        {
            has_one = true;
        }
        if (v[i] < min_val)
        {
            min_val = v[i];
            min_index = i;
        }
    }

    if (mp.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (has_one)
    {
        cout << -1 << endl;
        return;
    }

    int j = 1;
    queue<pair<int, int>> q;
    while (j < 30 * n)
    {
        map<int, int> mp;

        mp[min_val] = 1;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != min_val && i != min_index)
            {
                v[i] = ceil(v[i] / (double)min_val);
               
                mp[v[i]]++;
                q.push({min_index, i});

                if (v[i] < min_val)
                {
                    min_index = i;
                    min_val = v[i];
                }
            }
        }
     
        if (mp.size() == 1)
        {

            cout << q.size() << endl;
            while (!q.empty())
            {
                cout << q.front().second + 1 << " " << q.front().first + 1 << endl;
                q.pop();
            }
            return;
        }
        j++;
    }

    cout << -1 << endl;
    
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