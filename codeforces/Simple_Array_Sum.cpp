
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1001];
    int sum = 0;
    
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        sum+= arr[i];
    }
    cout << sum;


    return 0;
}