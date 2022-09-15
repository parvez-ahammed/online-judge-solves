#include <bits/stdc++.h>
using namespace std;

void solve()
{
    cout << setprecision(12) << fixed;
    long long int dog_x, dog_y, n, k, bone_x, bone_y;
    cin >> dog_x >> dog_y;

    set<pair<double, int>> pq;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> bone_x >> bone_y;

        pq.insert(make_pair(sqrt((((dog_x - bone_x) * (dog_x - bone_x))) + (((dog_y - bone_y) * (dog_y - bone_y)))), i));
    }

    // for (auto it = pq.begin(); it != pq.end();
    //      ++it)
    //     cout << ' ' << *it.first << *it.second;

    for (auto const &var : pq)
    {
        cout << "(" << var.first << ", " << var.second << ")"
             << " " << endl;
    }

    cout << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}