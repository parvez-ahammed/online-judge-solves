#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int solution(vector<int> nums, int target)
{
    int n = nums.size();
    vector<int> freq(target, 0);
    for (int i = 0; i < n; i++)
        freq[nums[i] % target]++;
        
    if (target % 2 == 0)
        freq[target / 2] = min(freq[target / 2], 1);

    int ans = min(freq[0], 1);

    for (int i = 1; i <= target / 2; i++)
        ans += max(freq[i], freq[target - i]);

    return ans;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        int target;
        cin >> target;
        int ans = solution(nums, target);
        cout << ans << endl;
    }
    return 0;
}