#include <bits/stdc++.h>
using namespace std;

int main()
{
    int space, rows;
    cin >> rows;

    vector<string> v;

    for (int i = 1, k = 0; i <= rows; ++i)
    {
        string temp = "";
        for (space = 1; space <= rows - i; ++space)
            temp += " ";

        while (k != 2 * i - 1)
        {
            temp += "*";
            ++k;
        }
        k = 0;
        v.push_back(temp);
        
    }

    for (int i = 0; i < v.size(); i++)cout << v[i] << endl;
    for (int i = v.size() -1; i >= 0; i--)cout << v[i] << endl;
    
    return 0;
}