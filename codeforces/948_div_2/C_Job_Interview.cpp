#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n, m;
    cin >> n >> m;
    int sz = n + m + 1;

    vector<pair<int, int>> v(sz + 1);
    for (int i = 1; i <= sz; i++)
        cin >> v[i].first;
    for (int i = 1; i <= sz; i++)
        cin >> v[i].second;

    set<pair<int, int>> programmer, tester;
    vector<int> idealProgrammer(sz + 1 , 0) , idealTester(sz + 1 , 0);

    vector<pair<int, int>> actualStat(sz + 1, { 0, 0 }), idealStat(sz + 1, { 0, 0 });
    ll programSkill = 0, testerSkill = 0;

    for (int i = 1; i <= n + m; i++) {

        if (v[i].first > v[i].second) {
            if (programmer.size() < n) {
                programmer.insert({ i, v[i].first });
                programSkill += v[i].first;
            } else {
                tester.insert({ i, v[i].second });
                testerSkill += v[i].second;
            }
        } else {
            if (tester.size() < m) {
                tester.insert({ i, v[i].second });
                testerSkill += v[i].second;
            } else {
                programmer.insert({ i, v[i].first });
                programSkill += v[i].first;
            }
        }

        actualStat[i].first = programmer.size();
        actualStat[i].second = tester.size();

        // baddho hoye nisi kina bujha jabe
        idealStat[i].first = idealStat[i - 1].first + (v[i].first > v[i].second);
        idealStat[i].second = idealStat[i - 1].second + (v[i].first < v[i].second);

        if (v[i].first > v[i].second) {
            idealProgrammer.push_back(v[i].first);
            idealTester.push_back(0);
        } else {
            idealProgrammer.push_back(0);
            idealTester.push_back(v[i].second);
        }

        // ideal casse idealStat == stat
    }

    ll temp = programSkill + testerSkill;

    vector<int> ans;
    ans.push_back(temp);

    for (int i = n + m; i >= 1; i--) {
        // tahole ami prothome take bad dibo

        // bad dite hoile jante hobe she ashole kothay ache

        bool isProgrammer = programmer.find({ i, v[i].first }) != programmer.end();
        isProgrammer = programmer.find({ i, v[i].second }) != programmer.end();

        bool isTester = tester.find({ i, v[i].first }) != tester.end();
        isTester = tester.find({ i, v[i].second }) != tester.end();

        int programmerCnt = actualStat[i].first;
        int testerCnt = actualStat[i].second;

        if (isProgrammer) {
            programSkill -= v[i].first;
            programmerCnt--;

            // hoy shob ideal programmer dhukbe

        } else {

            testerSkill -= v[i].second;
            testerCnt--;
        }

        int programmerNeed = n - programmerCnt;
        int testerNeed = m - testerCnt;

        // ami jani amar kache koyta ache
        // and amar kache koyta lagbe

        // so amake efficiently bolte hobe je next p

        ans.push_back(programSkill + testerSkill);
    }

    reverse(ans.begin(), ans.end());

    for (auto x : ans)
        cout << x << " ";
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