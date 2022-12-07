#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int r, c;
    cin >> r >> c;

    vector<char> v[r];

    int count = 0;

    int first_index = 0;

    int row_number = 0;

    vector<int> count_apple(c, 0);

    int ground_row = 0;
    int apple = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            char temp;
            cin >> temp;

            if (temp == 'O')
                count_apple[j]++;

            if (temp == '=')
                apple += count_apple[j];

            if (temp == 'a')
                ground_row = i;

            if (first_index == 0 && temp == '=')
            {
                first_index = j;
                row_number = i;
            }
            v[i].push_back(temp);
        }
    }

    // for (int i = 0; i < count_apple.size(); i++)
    // {
    //     cout << count_apple[i] << " ";
    // }

    // for (int j = first_index; j < (first_index + count); j++)
    // {
    //     // for (int i = row_number; i >= 0; i--)
    //     // {
    //     //     if (v[i][j] == 'O')
    //     //         apple++;
    //     // }

    // }
    // cout << row_number << endl;
    cout << apple << endl;
    // if (row_number > ground_row)
    //     cout << 0 << endl;
    // else
    //     cout << apple << endl;
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