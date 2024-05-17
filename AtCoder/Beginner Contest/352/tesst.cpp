#include <bits/stdc++.h>

using namespace std;

string game;

int playGame()
{

    // PSPSR
    int ans = 0;
    char lastChar = '#';

    map<char, char> winMap;
    winMap['R'] = 'P';
    winMap['P'] = 'S';
    winMap['S'] = 'R';

    for (int i = 0; i < game.size(); i++) {
        if (winMap[game[i]] == lastChar) {
            lastChar = game[i];
            if (i + 1 < game.size())
            {
                if (winMap[game[i + 1]] == lastChar) {
                    lastChar = game[i + 1];
                }
            }
        } else {
            lastChar = winMap[game[i]];
            ans++;
        }
    }

    return ans;
}
void solve()
{
    int n;
    cin >> n;
    cin >> game;
    cout << playGame() << endl;

    
}
int main()
{
    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }
}