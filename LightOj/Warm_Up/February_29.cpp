#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())

int calculateMultiple(int toYear, int fromYear, int multipleOf)
{
    return (toYear / multipleOf ) - ((fromYear - 1) / multipleOf);
}

void solve()
{
    string fromMonth, toMonth;
    ll fromDay, toDay, fromYear, toYear;
    char garbage;

    cin >> fromMonth >> fromDay >> garbage >> fromYear >> toMonth >> toDay >> garbage >> toYear;

    ll numberOfLeapYears  = 0 ;

    if (!(fromMonth == "January" || fromMonth == "February"))
        fromYear++;
    if (toMonth == "January" || (toMonth == "February" && toDay < 29))
        toYear--;


    numberOfLeapYears += calculateMultiple(toYear, fromYear, 4);
    numberOfLeapYears += calculateMultiple(toYear, fromYear, 400);
    numberOfLeapYears -= calculateMultiple(toYear, fromYear, 100);

    cout << numberOfLeapYears << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}