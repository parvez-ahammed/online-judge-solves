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
    string row_1, row_2;
    cin >> row_1 >> row_2;

    bool possible = false;

    for (int i = 0; i < row_1.size(); i++)
    {
        if (row_1[i] == row_2[i] && row_1[i] == 'W')
        {
            cout << "NO" << endl;
            return;
        }
    }


    vector<string> v;
    v.push_back(row_1);
    v.push_back(row_2);

    stack<pair<int, int>> s;

    int root_x = 1;
    int root_y = 0;

    if (v[1][0] == 'B' && v[0][0] == 'B')
    {
        if ((v[1][1] == 'B' && v[0][1] == 'B') || (v[1][0] == 'W'))
        {
            root_x = 1;
            root_y = 0;
        }
        else
        {
            root_x = 0;
            root_y = 0;
        }
    }
    else if (v[1][0] == 'B')
    {
        root_x = 1;
        root_y = 0;
    }
    else
    {
        root_x = 0;
        root_y = 0;
    }

    // cout << root_x << " " << root_y << endl;

    s.push(make_pair(root_x, root_y));

    // cout << v[0] << "\n"
    //      << v[1] << endl;
    // cout << endl;

    while (!s.empty())
    {
        int curr_x = s.top().first;
        int curr_y = s.top().second;
        v[curr_x][curr_y] = '2';

        s.pop();

        int count = 0;

       

        if (curr_y + 1 < row_1.size())
        {
            if (v[curr_x][curr_y + 1] == 'B')
            {
                v[curr_x][curr_y + 1] = 'V';
                s.push(make_pair(curr_x, curr_y + 1));
                count += 1;
            }
        }

        if (curr_x + 1 < 2)
        {
            if (v[curr_x + 1][curr_y] == 'B')
            {
                v[curr_x + 1][curr_y] = 'V';
                s.push(make_pair(curr_x + 1, curr_y));
                count += 1;
            }
        }

        if (curr_x - 1 >= 0)
        {
            if (v[curr_x - 1][curr_y] == 'B')
            {
                v[curr_x - 1][curr_y] == 'V';
                s.push(make_pair(curr_x - 1, curr_y));
                count += 1;
            }
        }

        bool possible = true;

        if (count == 2 )
        {
            if (curr_x == 1)
            {
                if (v[curr_x - 1][curr_y + 1] == 'W')
                    possible = false;
            }
            if (curr_x == 0)
            {
                if (v[curr_x + 1][curr_y + 1] == 'W')
                    possible = false;
            }
        }

        if (!possible || (count == 0 && curr_y == row_1.size()-2))
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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