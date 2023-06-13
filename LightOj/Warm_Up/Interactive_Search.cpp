
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int low = 1, high = 100000;
    cin >> high;

    int count = 0;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        cout << "guess " << mid << endl;

        string response;
        cin >> response;


        if (response == "correct")
            return 0;
        else if (response == "high")
            high = mid - 1;
        else if (response == "low")
            low = mid + 1;

        count++;
        if (count >= 30)
        {
            cout << "too many tries" << endl;
            return 0;
        }
    }

    return 0;
}