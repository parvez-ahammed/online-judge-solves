#include <bits/stdc++.h>
using namespace std;
int main()
{

    double a;
    cin >> a;
    string ans;
    if (a >= 0 && a <=25) ans = "[0,25]";
    else if (a > 25 && a <=50)ans = "(25,50]";
    else if (a > 50 && a <=75)ans = "(50,75]";
    else if (a > 75 && a <=100)ans = "(75,100]";
    else 
    {
        cout << "Out of Intervals" << endl;
        return 0;
    }

    


    cout << "Interval " << ans;

}