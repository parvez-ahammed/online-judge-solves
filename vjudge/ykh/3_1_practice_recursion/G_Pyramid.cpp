#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int n;

void createPyramid(int i)
{
    if (i > n)
    { // base case
        return;
    }

    int space = n - i;
    int stars = 2 * i - 1;
    rep(0, space) cout << ' ';
    rep(0, stars) cout << '*';
    cout << endl;

    createPyramid(i + 1);
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    createPyramid(1);

    return 0;
}