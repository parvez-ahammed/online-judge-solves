#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string str;
    cin >> str;



    if (str.find('n') >= 0 && str.find('e') >= 0 && str.find('p') >= 0 && str.find('a') >= 0 && str.find('l') >= 0  && str.find('n') <30 && str.find('e') <30 && str.find('p') <30 && str.find('a') <30 && str.find('l') <30)
        cout << "Maile Nepal banauna sakchhu!!"
             << "\n";
    else
        cout << "Hami sabai milera Nepal Banau hai!!"
             << "\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}