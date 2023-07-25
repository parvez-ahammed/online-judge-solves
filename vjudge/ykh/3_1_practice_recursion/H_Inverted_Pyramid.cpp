#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int n;

void createPyramid(int i)
{
    if (i == n)
        return;

    int space = i;
    rep(0, space) cout << ' ';

    int stars = (2 * n) - (i * 2) - 1;
    rep(0, stars) cout << '*';

    cout << endl;

    createPyramid(i + 1);
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  

        cin >> n;
        createPyramid(0);
    

    return 0;
}