#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    long long curr_ans = 1;
    long long main_ans = 0;

    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == str[i + 1])
        {

            curr_ans += 1;
        }
        else
        {
            main_ans = max(curr_ans, main_ans);
            curr_ans = 1;
        }
    }

    cout << main_ans<< endl;
}