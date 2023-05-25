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
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
void printVector(vector<int> v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

vector<int> modifyVector(string str)
{
    int n = str.size();
    vector<int> v(n);

    stack<pair<char, int>> s, empty;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
        {
            s.push({str[i], i});
        }
        else if (str[i] == ')')
        {

            if (!s.empty())
            {
                if (s.top().first == '(')
                {
                    v[i] = 1;
                    v[s.top().second] = 1;
                    s.pop();
                }
                else
                {
                    s.push({str[i], i});
                }
            }
        }
    }

    return v;
}

void solve()
{
    int n;
    cin >> n;
    string str, str2;
    cin >> str;

    str2 = str;

    Reverse(str2);

    vector<int> v(n);

    int count_s = 0, count_e = 0;

    for (int i = 0; i < n; i++)
        str[i] == '(' ? count_s++ : count_e++;

    if (count_s != count_e)
    {
        cout << -1 << endl;
        return;
    }

    v = modifyVector(str);

    bool has_one = false;
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            ones += 1;
        }
    }

    if (ones > 0)
    {
        bool changed = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 1)
            {
                changed = true;
                v[i] = 2;
            }
        }
        if (changed)
            cout << 2 << endl;
        if (ones == n)
            cout << 1 << endl;
    }
    else
    {
        v = modifyVector(str2);

        has_one = false;
        ones = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                ones += 1;
            }
        }

        bool changed = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 1)
            {
                changed = true;
                v[i] = 2;
            }
        }
        if (changed)
            cout << 2 << endl;
        if (ones == n)
            cout << 1 << endl;
    }

    printVector(v);
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