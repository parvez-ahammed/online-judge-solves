#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double len = 0, area ;
   
    cin >> len >> area;

    double all_area = sqrt(3) * len * len * 100;

    if (all_area >= area)
        cout << "Yes"
             << "\n";
    else
        cout << "No"
             << "\n";

    return 0;
}
