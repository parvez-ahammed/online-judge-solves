#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    map<int, vector<int>> mp; // to store the index of the number
    map<int, bool> pairFound; // to check if the pair is found or not

    for (int i = 0; i < n; i++) {
        cin >> v[i];

        mp[v[i]].push_back(i);
        pairFound[v[i]] = false;
    }

    vector<int> power_of_two;

    for (int i = 0; i <= 30; i++) {
        power_of_two.push_back(1 << i);
    }

    int pt = power_of_two.size();

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < pt; j++) {

            int need = power_of_two[j] - v[i];


            // if the number is present in the map
            if (mp.count(need) > 0) {

                // if the number equal and is present more than once
                if (need == v[i] and mp[need].size() > 1) {
                    pairFound[i] = true;
                    break;
                }

                else if (need != v[i]) {
                    pairFound[i] = true;
                    break;
                }
            }


        }
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (!pairFound[i]) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}