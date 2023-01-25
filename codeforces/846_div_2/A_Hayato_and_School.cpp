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
    int n;
    cin >> n;

    vector<int> ve;
    vector<int> vo;
    vector<int> vb;

    int even_count = 0;

    int odd_count = 0;
        int temp;

    for (int i = 1; i <= n; i++)

    {
    
        cin >> temp;
        if (temp % 2 == 0)
        {
            even_count++;
            ve.push_back(i);
          
        }
        else
        {
            odd_count++;
            vo.push_back(i);
            
        }
    }

    if (odd_count >= 3)
    {
        cout << "YES" << endl;
        for (int i = 0; i < 3; i++)
            cout << vo[i] << " ";

        cout << endl;
    }
    else if (even_count >= 2 && odd_count >= 1)
    {
        cout << "YES" << endl;
        for (int i = 0; i < 2; i++)
            cout << ve[i] << " ";
        for (int i = 0; i < 1; i++)
            cout << vo[i] << " ";
        cout << endl;
    }
    else
        cout << "NO" << endl;
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