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
    string str, as = "assembler", op = "operand";
    cin >> str;

    vector<int> vas(26, 0);
    vector<int> vop(26, 0);
    vector<int> vstr(26, 0);

    for (int i = 0; i < as.size(); i++)
    {
        vas[as[i] - 'a']++;
    }

    for (int i = 0; i < op.size(); i++)
    {
        vop[op[i] - 'a']++;
    }

    for (int i = 0; i < str.size(); i++)
    {
        vstr[str[i] - 'a']++;
    }

    int flag = 0;

    for (int i = 0; i < vas.size(); i++)
    {
        if (vstr[i] < vas[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {

        for (int i = 0; i < vas.size(); i++)
        {
            if (vstr[i] < vop[i])
            {
                flag = 2;
                break;
            }
        }

        if (flag == 2)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
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