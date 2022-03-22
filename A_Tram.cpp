
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,a,b;

    //int ab[1001][10001];
    cin >> n;
    int sum = 0;
    int max = 0;

    while (n--)
    {
        cin >> a >> b;
        sum-=a;
        sum+=b;

        if (sum >= max) max= sum;
    }
    cout << max;
   
    
    return 0;
}