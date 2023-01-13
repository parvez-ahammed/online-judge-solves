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

    vector<int> v;
    int k;
    cin >> k;
    int temp;

    priority_queue<int> s;

    int curren_go = 1;

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        s.push(-1 * temp);



        if (flag == 1)
        {
            while (!s.empty())
            {
                if ((s.top() * -1) == curren_go )
                {
                  //  cout <<  curren_go << endl;
                    s.pop();
                    curren_go++;

                }
                else
                {
                    break;
                }
            }

        }

        if (s.size() > k)
        {
            flag = 0;
        }
    }

    cout << curren_go - 1  << endl;
}

int32_t main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
