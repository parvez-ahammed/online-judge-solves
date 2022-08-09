#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str_1, str_2;
    cin >> str_1 >> str_2;
    sort(str_1.begin(), str_1.end());
    sort(str_2.begin(), str_2.end());

    if (str_1 == str_2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}