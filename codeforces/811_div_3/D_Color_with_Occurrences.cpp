#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

map<string, int> mp;
map<string, vector<int>> positions;
vector<int> state, track;
string text;

void doColor(int start, int end, int stringNumber)
{
    int patSize = end - start;

    for (int i = start; i < end; i++)
    {

        if (patSize > state[i])
        {
            state[i] = patSize;
            track[i] = stringNumber;
        }
    }
}

void process(string pat)
{

    int patSize = pat.size();
    int textSize = text.size();

    if (patSize > textSize)
        return;

    string sub = "";

    sub = text.substr(0, patSize);

    for (int i = 0; i <= text.size() - patSize; i++)
    {
        if (sub == pat)
        {
            positions[pat].push_back(i + 1);
            doColor(i, i + patSize, mp[pat]);
        }

        sub.erase(sub.begin());
        sub += text[patSize + i];
    }
}

void solve()
{
    state = vector<int>(200, 0);
    track = vector<int>(200, 0);
    positions.clear();
    mp.clear();
    int n;

    cin >> text >> n;

    vector<string> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i;
        if (text.size() > 1)
            process(v[i]);
    }

    int notColored = count(state.begin(), state.begin() +text.size(), 0);

    if (text.size() == 1)
    {
        if (mp[text] > 0)
        {
            cout << 1 << "\n"
                 << mp[text] << " " << 1 << endl;
            return;
        }
    }

    else if (notColored == 0)
    {
        for (int i = 0; i < v[track[0]].size(); i++)
            track[i] = track[0];

        int end = text.size() - v[track[text.size() - 1]].size();
        int endString = track[text.size() - 1];
        // cout << endl;
        // cout << end << " " << endString << endl;

        int start = text.size() - 1;
        // cout << start << endl;

        for (int i = start; i >= end; i--)
            track[i] = endString;

        set<pair<int, int>> vp;

        for (int i = 0; i < text.size(); i++)
        {
            int stringNum = track[i];
            string str = v[stringNum];
            int stringSize = str.size();

            vector<int> &pos = positions[str];
            int start = -1;

            for (int j = 0; j < pos.size(); j++)
            {

                if (i + 1 >= pos[j] and i + 1 < pos[j] + stringSize)
                {

                    start = pos[j];
                    pos[j] = -200;
                    break;
                }
            }

            if (start != -1)
                vp.insert({start, stringNum});
        }

        cout << vp.size() << endl;
        for (auto p : vp)
            cout << p.second << " " << p.first << endl;
        return;
    }

    cout << -1 << endl;
}
int32_t main()
{

    FAST

        int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}


