#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())

string converString(string name)
{

    stringstream X(name);

    string convName = "";
    string T;
    while (getline(X, T, ' '))
        convName += T;
    rep(0, convName.size()) convName[i] = tolower(convName[i]);

    sort(convName.begin(), convName.end());

    return convName;
}

int32_t main()
{

    int tc = 1;
    int i = 1;
    cin >> tc;
    string name1, name2;

    string demo;

    getline(cin, demo);
    while (tc--)
    {
        cout << "Case " << i++ << ": ";

        getline(cin, name1);
        getline(cin, name2);

        string convName1 = converString(name1), convName2 = converString(name2);

        convName1 == convName2
            ? cout << "Yes"
            : cout << "No";
        cout << endl;
    }
    return 0;
}