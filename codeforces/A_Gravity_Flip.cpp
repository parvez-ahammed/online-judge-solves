
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    int n;
    cin >> n;
    int arr[101];
    
    for (int i = 0 ; i < n ; i ++)
    {
        cin >> arr[i];
    }
    sort(arr ,arr+n);
    
    for (int i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }
   
    return 0;
}