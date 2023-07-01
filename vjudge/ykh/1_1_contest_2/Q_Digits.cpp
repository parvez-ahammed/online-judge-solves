#include <bits/stdc++.h>
using namespace std;

/**-------Shortend Library-------*/

int main()
{

    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;
        int space_count = 0;
        reverse(s.begin(), s.end());

        for (int i = 0; i < s.length(); i++)
        {

            cout << (s[i]);

            if (space_count < s.length() - 1)
            {
                cout << " ";
                space_count++;
            }
        }
        cout << endl;
    }

    return 0;
}
