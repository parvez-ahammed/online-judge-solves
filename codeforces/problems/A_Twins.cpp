
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int value[101];
    
    int main_sum = 0;
    int second_sum = 0;

    for (int i = 0; i < n; i++)
    {
         cin >> value[i];
         main_sum+= value[i];
    }
    sort(value, value + n, greater<int>());
    int count =0;

    for (int i = n-1 ; i >= 0 ; i --)
    {
        if ( (main_sum- value[i]) > (second_sum + value[i]) )
        {
            count++; 
            main_sum -= value[i];
            second_sum += value[i];  
        }
        else 
        {
            break;
        }
    }

    
    cout << n-count;

    return 0;
}