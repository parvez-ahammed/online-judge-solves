#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string str;
    cin >> str;
    int ca = count(str.begin(), str.end(), 'A');
    int cd = count(str.begin(), str.end(), 'D');
    if (ca > cd)
    {
        cout << "Anton" << endl;
    }
    else if (ca == cd)
    {
        cout << "Friendship" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }
}