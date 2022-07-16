#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n;
    int temp;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        count+= temp;
    }
    
    

    cout << count << endl;
}