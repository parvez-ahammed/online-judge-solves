#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**----data type----*/
#define ll long long int
#define llu unsigned long long int

int main()
{

    ll tc;
    cin >> tc;

    while (tc--)
    {
        ll w, h;

        cin >> w >> h;

        ll total_cells = w * h;

        if (total_cells <= 9)
            cout << 1 << endl;
        else if (total_cells > 9)
        {

            ll row_count = h / 3;
            ll col_count = w / 3;
            h %= 3;
            w %= 3;

            ll cell_need = (row_count * col_count);

            total_cells -= cell_need * 9;

            if (total_cells == 0)
                cout << cell_need << endl;
            else
            {
               

                if (w != 0 && h == 0)
                    cout << cell_need + row_count << endl;
                else if (w == 0 && h != 0)
                    cout << cell_need + col_count << endl;
                else
                    cout <<cell_need + col_count+ row_count+1 <<endl;
            }
        }
    }

    return 0;
}