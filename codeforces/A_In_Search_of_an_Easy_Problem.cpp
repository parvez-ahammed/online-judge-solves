
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string>
typedef long long ll;

int main()
{
    ll n;
    
    cin >> n;
    int input;

    while (n--)
    {
        cin >> input ;
        if (input == 1)
        {
            cout << "HARD" <<endl;
            return 0;
        }
    }
    cout << "EASY" <<endl;

    

    return 0;
}