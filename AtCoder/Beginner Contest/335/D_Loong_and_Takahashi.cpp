#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    n++;

    vector<vector<int>> v(n, vector<int>(n, 0));
    int part = 1;

    int target = n * n - 1;

    int start = 1;
    int row = start, col = start;

    char dir = 'R';

    int rightMargin = n - start + 1;
    int downMargin = n - start + 1;
    int leftMargin = start;
    int upMargin = start + 1;

    int term = 1;
    while (part < target) {

        

        if (dir == 'R') {
            for (int i = col; i < rightMargin; i++) {
                v[row][i] = part;
                part++;
            }
            row++;
            col = rightMargin - 1;
            dir = 'D';
            rightMargin--;
        }

        

        if (dir == 'D') {
            for (int i = row; i < downMargin; i++) {
                v[i][col] = part;
                part++;
            }
            col--;
            row = downMargin - 1;
            dir = 'L';
            downMargin--;
        }

        

        if (dir == 'L') {
            for (int i = col; i >= leftMargin; i--) {
                v[row][i] = part;
                part++;
            }
            row--;
            col = leftMargin;
            dir = 'U';
            leftMargin++;
        } if (term == 50)
            break;
      

        if (dir == 'U') {
            for (int i = row; i >= upMargin; i--) {
                v[i][col] = part;
                part++;
            }

            col++;
            row = upMargin;
            dir = 'R';
            upMargin++;
            term++;

          
        }

         
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++)
        {
            if (i == n/2 && j == n/2)
                cout << "T" << " ";
            else
                cout << v[i][j] << " ";
        }
            
        cout << endl;
    }
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