
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int result[12];

    result[0] = a + b + c;
    result[1] = a + b * c;
    result[2] = a * b + c;
    result[3] = a * b * c;

    result[4] = (a + b) + c;
    result[5] = a + (b + c);

    result[6] = (a + b) * c;
    result[7] = a + (b * c);

    result[8] = (a * b) + c;
    result[9] = a * (b + c);

    result[10] = (a * b) * c;
    result[11] = a * (b * c);
    

    sort(result,result+12);
    cout << result[11];

    return 0;
}