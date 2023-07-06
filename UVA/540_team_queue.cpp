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
#define rep(start, x) for (int i = start; i < x; i++)

void solve(int team_number)
{
    queue<int> team_q;
    map<int, int> mp;
    queue<int> member_queue[2000];

    for (int i = 1; i <= team_number; i++)
    {
        int members = 0 ,m_id;
        cin >> members;

        while (members--)
        {
            cin >> m_id;
            mp[m_id] = i;
        }
    }
    string command = "";

    
    while (cin >> command && command != "STOP")
    {
        if (command == "ENQUEUE")
        {
            int id;
            cin >> id;
            int team_id = mp[id];
            // cout << team_id << endl;
            if (member_queue[team_id].size() == 0)
                team_q.push(team_id);

            member_queue[team_id].push(id);
        }
        else
        {
            // cout << "DEQUEUE" << endl;

            while (!team_q.empty())
            {
                int top_team = team_q.front();

                if (member_queue[top_team].empty())
                    team_q.pop();
                else
                {
                    cout << member_queue[top_team].front() << endl;
                    member_queue[top_team].pop();

                    if (member_queue[top_team].empty())
                        team_q.pop();

                    break;
                }
            }
        }
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int team_number = 0;
    int i = 1;
    while (cin >> team_number && team_number != 0)
    {
        cout << "Scenario #" << i << endl;
        solve(team_number);
        cout << endl;
        ++i;
    }

    return 0;
}