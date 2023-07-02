#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> a, b;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        int streak = 0;

        int curr_streak = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0 && b[i] > 0)
                curr_streak++;
            else
            {
                streak = max(curr_streak, streak);
                curr_streak = 0;
            }
        }

        cout << max(streak,curr_streak) << endl;
    }
    return 0;
}
