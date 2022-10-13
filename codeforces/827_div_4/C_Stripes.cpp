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

void solve()
{

    vector<string> strv;
    string temp;
    for (int i = 0; i < 8; i++)
    {
        cin >> temp;
        strv.push_back(temp);
    }
    int r_count = 0, b_count = 0;
    bool found = false;
    char painted = 'R';
    for (int i = 0; i < 8; i++)
    {

        if (strv[i][0] == 'R')
        {
            if (strv[i].find('B') != std::string::npos && strv[i].find('R') != std::string::npos)
            {
                painted = 'B';
            }
            else
                painted = 'R';
            if (strv[i].find('R') != std::string::npos)
                r_count += 1;
            if (strv[i].find('B') != std::string::npos)
                b_count += 1;
        }
        if (strv[i].find('R') != std::string::npos && strv[i].find('B') == std::string::npos)
        {
            painted = 'R';
            break;
        }
    }

    if (r_count == 0)
        cout << "B" << endl;
    else if (b_count == 0)
        cout << "R" << endl;
    else
        cout << painted << endl;
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

/*

.......B
.......B
.......B
.......B
.......B
.......B
.......B
RRRRRRRR

*/
