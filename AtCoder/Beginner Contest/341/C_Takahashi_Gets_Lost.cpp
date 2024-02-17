#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool isValid(int i, int j, int h, int w)
{
    return i >= 0 && i < h && j >= 0 && j < w;
}

void updatePath(int& i, int& j, char dir)
{
    if (dir == 'U') {
        i--;
    } else if (dir == 'D') {
        i++;
    } else if (dir == 'L') {
        j--;
    } else if (dir == 'R') {
        j++;
    }
}
void solve()
{

    int h, w, n;
    cin >> h >> w >> n;
    vector<string> s(h);

    string path;
    cin >> path;

    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }

    int cnt = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {

            if (s[i][j] == '.') {

                int tempI = i;
                int tempJ = j;
                for (int k = 0; k < n; k++) {
                    updatePath(tempI, tempJ, path[k]);
                    if (!isValid(tempI, tempJ, h, w)) {
                        break;
                    }

                    if (s[tempI][tempJ] == '#') {
                        break;
                    }
                    if (k == n - 1) {
                        cnt++;
                    }
                }
            }
        }
    }

    cout << cnt << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}