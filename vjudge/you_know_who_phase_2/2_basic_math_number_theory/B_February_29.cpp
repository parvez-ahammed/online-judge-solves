#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int leap1toN(int year)
{
    int ans = year / 4;
    ans -= year / 100;
    ans += year / 400;
    return ans;
}

int countLeap(int sYear, int eYear)
{
    return leap1toN(eYear) - leap1toN(sYear - 1);
}
void solve()
{

    string sMonth;
    int sDate, sYear;
    char comma;
    cin >> sMonth >> sDate >> comma >> sYear;

    string eMonth;
    int eDate, eYear;
    cin >> eMonth >> eDate >> comma >> eYear;

    if (sMonth != "January" and sMonth != "February") {
        sYear++;
    }

    if (eMonth == "January" or (eMonth == "February" and eDate < 29)) {
        eYear--;
    }

    cout << countLeap(sYear, eYear) << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}