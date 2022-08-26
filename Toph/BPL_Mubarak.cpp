#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    queue<string> strings;

    while (n--)
    {

        string str;
        cin >> str;

        int ball_count = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != 'W' && str[i] != 'N' && str[i] != 'D')
            {
                ball_count++;
            }
        }

        if (ball_count == 1)
        {
            cout << "1 BALL" << endl;
        }
        else if (ball_count < 6)
        {
            cout << ball_count << " BALLS" << endl;
        }
        else if (ball_count == 6)
        {
            cout << "1 OVER" << endl;
        }
        else
        {
            if (ball_count % 6 == 0)
            {
                cout << ball_count / 6 << " OVERS" << endl;
            }
            else
            {
                if (ball_count / 6 == 1)
                {

                    if ((ball_count % 6) == 1)
                        cout << ball_count / 6 << " OVER " << (ball_count % 6) << " BALL" << endl;
                    else
                        cout << ball_count / 6 << " OVER " << (ball_count % 6) << " BALLS" << endl;
                }
                else
                {

                    cout << ball_count / 6 << " OVERS " << (ball_count % 6) << " BALLS" << endl;
                }
            }
        }
    }

    return 0;
}