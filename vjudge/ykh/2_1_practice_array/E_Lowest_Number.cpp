#include <bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin >> n;
    int arr[n];

    int low_val = (10e5) + 1, low_index;
    

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] < low_val)
        {
            low_val = arr[i];
            low_index = i+1;
        }
    }

    
    cout << low_val << " " << low_index << endl;
    return 0;
}