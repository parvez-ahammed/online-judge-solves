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

void solve() {}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 1;

    while (cin >> n && n != 0)
    {

        int first = 1;
        while (cin >> first && first != 0)
        {
            vector<int> v;
            stack<int> q;
            vector<int> departed(n + 1, 0);
            vector<int> pushed(n + 1, 0);

            v.push_back(first);
            int curr_max = 0;

            for (int i = 1; i < n; i++)

            {
                int temp;
                cin >> temp;
                v.push_back(temp);
            }

            for (int i = 0; i < v.size(); i++)
            {

                if (departed[v[i]] == 0)
                {

                    if (v[i] > curr_max)
                    {

                        curr_max = max(v[i], curr_max);
                        for (int j = 1; j <= curr_max; j++)
                        {

                            if (pushed[j] == 0)
                            {
                                //cout << "HIT " << j << endl;
                                q.push(j);
                                pushed[j] = 1;

                                curr_max = max(j, curr_max);
                            }
                        }
                    }

                   // cout << q.top() << " " << v[i] << endl;

                    if (q.top() != v[i])
                    {
                        break;
                    }

                    else
                    {
                        q.pop();
                        departed[v[i]] = 1;
                    }
                }
            }

            //cout << "SIZE " << q.size() << " ";

            // while (!q.empty())
            // {
            //     cout << q.top() << endl;
            //     q.pop();
            // }

            if (q.empty())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }

        cout << endl;
    }
    return 0;
}