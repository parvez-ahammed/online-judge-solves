#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int n, m;
struct assitant {
    int t, y, z;
};

vector<assitant> assist;
vector<int> balloons;

ll canInflateBallon(int t, int y, int z, int x)
{

    int block_time = t * z + y;
    int count_blocks = x / block_time;

    long long current_balloons = (count_blocks * 1ll) * z;
    int partial_block_time = x % block_time;
    current_balloons += min(z, partial_block_time / t);

    return current_balloons;
}

bool ok(int mid)
{

    long long total_balloons = 0;
    long long ballons_left = m;

    for (int i = 0; i < n; i++) {

       
        ll current_balloons = canInflateBallon(assist[i].t, assist[i].y, assist[i].z, mid);

        total_balloons += current_balloons;
        balloons[i] = min(ballons_left, current_balloons);
        ballons_left -= balloons[i];
    }
    return total_balloons >= m;
}

int binSearch()
{

    int l = 0, r = 1e7 + 1, mid, ans = 0;

    while (l <= r) {
        mid = l + (r - l) / 2;

        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {

            l = mid + 1;
        }
    }

    return ans;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n;

    assist.resize(n);
    balloons.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> assist[i].t >> assist[i].z >> assist[i].y;
    }
    int ans = binSearch();
    cout << ans << endl;
    ok(ans);
    for (int i = 0; i < n; i++) {
        cout << balloons[i] << " ";
    }

    return 0;
}