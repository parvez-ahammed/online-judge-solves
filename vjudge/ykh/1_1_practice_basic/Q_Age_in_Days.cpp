#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long a;
    cin >> a;
    int years = a/365;
    a %= 365;
    int months = a/30;
    a %= 30 ;
    int days = a;
    cout << years<< " years\n" << months << " months\n" <<  days << " days"<< endl;

}