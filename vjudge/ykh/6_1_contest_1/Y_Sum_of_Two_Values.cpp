#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> nums(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> nums[i].first;
        nums[i].second = i;
    }

    sort(nums.begin(), nums.end());

    nums.push_back({ INT_MAX, INT_MAX });
    

    for (int i = 1; i <= n; i++) {

        if (nums[i].first >= x)
            continue;

        int req = x - nums[i].first;

        int indice = lower_bound(nums.begin(), nums.end(), make_pair(req, 0)) - nums.begin();

        if (req == nums[i].first)
            indice++;

        if (nums[indice].first == req) {
            cout << nums[i].second << " " << nums[indice].second << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
