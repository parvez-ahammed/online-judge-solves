#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int movieA = 0, movieB = 0;

    int like = 0, dis = 0;

    for (int i = 0; i < n; i++) {

        if (a[i] == b[i]) {
            continue;
        }
        if (a[i] > b[i])
            movieA += a[i];
        else
            movieB += b[i];
    }
    if (like) {

        if (movieA == movieB) {
            movieA += like / 2;
            movieB += like / 2;
            movieA += like % 2;
        } else if (movieA < movieB) {
            if (movieA + like <= movieB) {
                movieA += like;
            } else {
                int diff = movieB - movieA;
                like -= diff;
                movieA += diff;

                movieA += like / 2;
                movieB += like / 2;
                movieA += like % 2;
            }
        } else {
            if (movieB + like <= movieA) {
                movieB += like;
            } else {
                int diff = movieA - movieB;
                like -= diff;
                movieB += diff;

                movieA += like / 2;
                movieB += like / 2;
                movieA += like % 2;
            }
        }
    }
    if (dis) {

        if (movieA == movieB) {
            movieA -= dis / 2;
            movieB -= dis / 2;
            movieA -= dis % 2;
        } else if (movieA > movieB) {
            if (movieA - dis >= movieB) {
                movieA -= dis;
            } else {
                int diff = movieA - movieB;
                dis -= diff;
                movieA -= diff;

                movieA -= dis / 2;
                movieB -= dis / 2;
                movieA -= dis % 2;
            }
        } else {
            if (movieB - dis >= movieA) {
                movieB -= dis;
            } else {
                int diff = movieB - movieA;
                dis -= diff;
                movieB -= diff;

                movieA -= dis / 2;
                movieB -= dis / 2;
                movieA -= dis % 2;
            }
        }
    }

    cout << min(movieA, movieB) << endl;
}

int32_t
main()
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