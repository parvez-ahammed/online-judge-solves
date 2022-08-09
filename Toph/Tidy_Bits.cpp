#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n ;

    string s = bitset<64> (n).to_string();
    int count_1 = count (s.begin(),s.end(),'1');
    cout << pow(2,count_1) -1;
}