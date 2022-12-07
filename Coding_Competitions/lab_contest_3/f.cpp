#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <iostream>
#include <string>

int get_value(string str)
{
    string new_str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            new_str += (str[i]);
        }
    }

    int new_int = stoi(new_str);

    return new_int;
}
void solve()
{

    int n;
    cin >> n;

    vector<int> v;
    int temp;
    string str;
    n += 1;

    long long int max_val = -1;
    long long int min_val = 10e9;

    long long int value = 0;
    while (n--)
    {

        getline(cin, str);
        if (str.find("Insert Back") != std::string::npos)
        {
            value = get_value(str);
            v.push_back(value);
            if (value < min_val)
                min_val = value;
            if (value > max_val)
                max_val = value;
        }
        else if (str.find("Insert Front") != std::string::npos)
        {
            value = get_value(str);
            v.insert(v.begin(), value);
            if (value < min_val)
                min_val = value;
            if (value > max_val)
                max_val = value;
        }
        else if (str.find("Erase Back") != std::string::npos)
            v.pop_back();
        else if (str.find("Erase Front") != std::string::npos)
            v.erase(v.begin());
        else if (str.find("Get Front") != std::string::npos)
            cout << v[0] << endl;
        else if (str.find("Get Back") != std::string::npos)
            cout << v[v.size() - 1] << endl;
        else if (str.find("Get Max") != std::string::npos)
            cout << *max_element(v.begin(), v.end()) << endl;
        else if (str.find("Get Min") != std::string::npos)
            cout << *min_element(v.begin(), v.end()) << endl;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
