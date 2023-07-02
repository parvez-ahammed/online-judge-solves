#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v(3) , b;
    for (int i = 0; i < 3; i++)
        cin >> v[i];
    b= v;

    sort(v.begin(), v.end());

    for (int i = 0; i < 3; i++)
        cout << v[i] << endl;



    cout << endl;

    for (int i = 0; i < 3; i++)
        cout << b[i] << endl;
}