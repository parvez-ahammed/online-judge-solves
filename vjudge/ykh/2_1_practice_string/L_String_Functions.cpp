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
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

void solve()
{

    ll n, q;
    cin >> n >> q;
    string str;
    cin >> str;
    string instruction;
    // q += 1;
    while (q--)
    {
        cin >> instruction;
        if (instruction.find("pop_back") != string::npos)
            str.erase(str.begin() + str.size() - 1);
        else if (instruction.find("front") != string::npos)
            cout << str[0]
                 << "\n";
        else if (instruction.find("push_back") != string::npos)
        {
            char c;
            cin >> c;
            str.push_back(c);
        }

        else if (instruction.find("back") != string::npos)
            cout << str[str.size() - 1]
                 << "\n";
        else if (instruction.find("sort") != string::npos)
        {
            int l, r;
            cin >> l >> r;
            sort(str.begin() + min(l, r) - 1, str.begin() + max(l, r));
        }

        else if (instruction.find("reverse") != string::npos)
        {
            int l, r;
            cin >> l >> r;
            reverse(str.begin() + min(l, r) - 1, str.begin() + max(l, r));
        }
        else if (instruction.find("print") != string::npos)
        {
            int l;
            cin >> l;
            cout << str[l - 1] << "\n";
        }
        else if (instruction.find("substr") != string::npos)
        {
            int l, r;
            cin >> l >> r;
            cout << str.substr(min(l, r) - 1,  max(l, r)-min(l, r)+1 ) << "\n";
        }
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}