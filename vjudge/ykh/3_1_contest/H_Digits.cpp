#include <bits/stdc++.h>
using namespace std;

#define endl "\n"


int main()
{
    int n, k;
    cin >> n >> k;
    cout << floor(log2(n) / log2(k)) + 1 << endl;
    return 0;
}