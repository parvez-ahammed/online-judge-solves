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

    int temp;

    vector<int> main_v;

    for (int i = 1; i <= n; i++)
        main_v.push_back(i);

    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int j = 0; j < n - 1; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }

        for (int k = 0; k < n - 1; k++)
        {

            int index_1_in_main = find(main_v.begin(), main_v.end(), v[k]) - main_v.begin();
            int index_2_in_main = find(main_v.begin(), main_v.end(), v[k + 1]) - main_v.begin();

            if (index_2_in_main < index_1_in_main)
                swap(main_v[index_1_in_main], main_v[index_2_in_main]);
        }
        
    }
    for (int i = 0; i < main_v.size(); i++)
            cout << main_v[i] << " ";
        cout << endl;

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