#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int getMinimum(vector<int> a, vector<int> b)
{
    int n = a.size();

    map<int, int> mpA, mpB;

    for (int i = 0; i < n; i++) {
        mpA[a[i]]++;
    }

    for (int i = 0; i < n; i++) {
        mpB[b[i]]++;
    }

    for (auto p : mpA) {
        if (mpB.count(p.first) > 0) {

            int mn = min(mpA[p.first], mpB[p.first]);
            mpA[p.first] -= mn;
            mpB[p.first] -= mn;
        }
    }

    vector<int> tempA, tempB;

    for (auto p : mpA) {
        while (p.second--) {
            tempA.push_back(p.first);
        }
    }

    for (auto p : mpB) {
        while (p.second--) {
            tempB.push_back(p.first);
        }
    }

    sort(tempA.rbegin(), tempA.rend());
    sort(tempB.begin(), tempB.end());

    int minimumCnt = 0;
    for (int i = 0; i < tempA.size(); i++) {
        if (tempA[i] > tempB[i]) {
            minimumCnt++;
        }
    }
    return minimumCnt;
}

int getMaximum(vector<int> a, vector<int> b)
{
    int n = a.size();
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    

    int maximumCnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            maximumCnt++;
        }
    }
    return maximumCnt;
}

void solve()
{

    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n), tempA, tempB;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int current = 0;

    int minimumCnt = getMinimum(a, b);
    int maximumCnt = getMaximum(a, b);

   
    if (minimumCnt <= x and x <= maximumCnt) {
        cout << "YES" << endl;

        vector<pair<int, int>> tempA, tempB;

        for (int i = 0; i < n; i++)
            tempA.push_back({ a[i], i });

        for (int i = 0; i < n; i++)
            tempB.push_back({ b[i], i });

        sort(tempA.rbegin(), tempA.rend());
        sort(tempB.rbegin(), tempB.rend());

        vector<int> ans(n);
        for (int i = 0; i < x; i++) {
            ans[tempA[i].second] = tempB[i].first;
        }

        

        map<int, vector<int>> mpA, mpB;

        for (int i = x; i < tempA.size(); i++) {
            mpA[tempA[i].first].push_back(tempA[i].second);
        }

        for (int i = x; i < tempB.size(); i++) {
            mpB[tempB[i].first].push_back(tempB[i].second);
        }

        for (auto p : mpA) {
            if (mpB.count(p.first) > 0) {
                int mn = min(mpA[p.first].size(), mpB[p.first].size());
                for (int i = 0; i < mn; i++) {
                    int indiceA = mpA[p.first][i];
                    ans[indiceA] = p.first;
                }

                for (int i = 0; i < mn; i++) {
                    mpA[p.first].erase(mpA[p.first].begin());
                    mpB[p.first].erase(mpB[p.first].begin());
                }
            }
        }

        vector<pair<int, int>> moreValA, moreValB;

        for (auto p : mpA) {

            for (int i = 0; i < p.second.size(); i++) {
                moreValA.push_back({ p.first, p.second[i] });
            }
        }

        for (auto p : mpB) {

            for (int i = 0; i < p.second.size(); i++) {
                moreValB.push_back({ p.first, p.second[i] });
            }
        }

        sort(moreValA.rbegin(), moreValA.rend());
        sort(moreValB.rbegin(), moreValB.rend());

        for (int i = 0; i < moreValA.size(); i++) {
            ans[moreValA[i].second] = moreValB[i].first;
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }

        int cnt = 0;

        for (int i = 0; i < n; i++) {

            cnt += (a[i] > ans[i]);
        }

        // cerr << (cnt == x) << endl;

        cout << endl;

        return;
    }
    cout << "NO" << endl;
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