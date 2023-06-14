#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
void solve()
{
    int n, m;
    cin >> n >> m;

    int x;
    vector<int> v;

    while (m--)
    {
        string command;
        cin >> command;

        if (command == "pushLeft" || command == "pushRight")
        {
            cin >> x;

            if (v.size() == n)
                cout << "The queue is full" << endl;
            else if (command == "pushLeft")
            {
                cout << "Pushed in left: " << x << endl;
                v.insert(v.begin(), x);
            }
            else if (command == "pushRight")
            {
                cout << "Pushed in right: " << x << endl;
                v.push_back(x);
            }
        }
        else if (command == "popLeft" || command == "popRight")
        {
            if (v.size() == 0)
                cout << "The queue is empty" << endl;
            else if (command == "popLeft")
            {
                cout << "Popped from left: " << v[0] << endl;
                v.erase(v.begin());
            }
            else
            {
                cout << "Popped from right: " << v[v.size() - 1] << endl;
                v.pop_back();
            }
        }
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": " << endl;
        solve();
    }
    return 0;
}