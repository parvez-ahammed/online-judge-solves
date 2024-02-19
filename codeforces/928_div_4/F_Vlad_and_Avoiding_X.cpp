#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool isValid(int i, int j, int n = 7, int m = 7)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}
bool check(map<pair<int, int>, vector<pair<int, int>>>& bag, vector<string> v, int mid)
{
    vector<pair<int, pair<int, int>>> temp;

    for (auto [p, q] : bag) {
        temp.push_back({ q.size(), { p.first, p.second } });
    }

    sort(temp.rbegin(), temp.rend());
    int sz = temp.size();
    for (int i = 0; i < min(mid , sz); i++) {
        v[temp[i].second.first][temp[i].second.second] = 'W';
    }

    int fx[] = { 1, 1, -1, -1 };
    int fy[] = { 1, -1, 1, -1 };

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {

            if (v[i][j] == 'B') {
                int cnt = 0;

                for (int k = 0; k < 4; k++) {
                    int x = i + fx[k];
                    int y = j + fy[k];
                    if (isValid(x, y)) {
                        cnt += (v[x][y] == 'B');
                    }
                }

                if (cnt == 4) {
                    return false;
                }
            }
        }
    }
    return true;
}
void solve()
{
    vector<string> v(7);

    for (int i = 0; i < 7; i++) {
        cin >> v[i];
    }

    map<pair<int, int>, vector<pair<int, int>>> bag;

    int fx[] = { 1, 1, -1, -1 };
    int fy[] = { 1, -1, 1, -1 };

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {

            if (v[i][j] == 'B') {
                int cnt = 0;
                for (int k = 0; k < 4; k++) {
                    int x = i + fx[k];
                    int y = j + fy[k];
                    if (isValid(x, y)) {
                        if (v[x][y] == 'B') {
                            bag[{ x, y }].push_back({ i, j });
                        }
                    }
                }
                if (cnt != 4) {
                  bag[{i, j}].clear();
                }
                
            }
        }
    }
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
           cout << bag[{i, j}].size() << " ";
        }
        cout << endl;
    }

  
    int l = 0, r = 50;

    while (l < r) {
        int mid = (l + r) / 2;
        if (check(bag, v, mid)) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    cout << r << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}