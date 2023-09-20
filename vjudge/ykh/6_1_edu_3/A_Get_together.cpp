#include <bits/stdc++.h>
using namespace 
std;
#define ll long long int
#define endl "\n"
int N;
vector<pair<int, int>> person;

double timeReqiredToMeet(double meetPos)
{

    double maxTime = 0;

    for (int i = 0; i < N; i++) {
        double distance = abs(meetPos - person[i].first);
        double time = (distance * 1.0) / person[i].second;

        maxTime = max(maxTime, time);
    }

    return maxTime;
}

double ok(double meetPos)
{

    double time = timeReqiredToMeet(meetPos);


    return time;

   
}

double binSearch()
{
    double time = 0;

    int iterations = 100;

    double l = 2e9 * -1.0;

    double r = 2e9;

    while (iterations--) {
        double meetPos = l + (r - l) / 2.0;

        if (ok(meetPos)) {

            r = meetPos;
        } else {
            l = meetPos;
        }
    }

    return time;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    person.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> person[i].first >> person[i].second;
    }

    double ans = binSearch();

    cout << ok(ans) << endl;

    return 0;
}