#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int n, step, moves;
// moves a disk from source to destination using the extra rod
void buildHanoi(int disks, char source, char extra, char destination)
{
    if (disks == 0)
        return;
    // moving the top n-1 disks from source to extra using destination

    char newDestination = extra;
    char newSource = source;
    char newExtra = destination;
    buildHanoi(disks - 1, newSource, newExtra, newDestination);

    moves++;
    if (moves == step) {
        cout << disks << " : " << source << " => " << destination << '\n';
    }

    // moving the top n-1 disks from extra to destination using source
    newDestination = destination;
    newSource = extra;
    newExtra = source;
    buildHanoi(disks - 1, newSource, newExtra, newDestination);
}

void solve()
{

    moves = 0;

    cin >> n >> step;

    buildHanoi(n, 'A', 'B', 'C');
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