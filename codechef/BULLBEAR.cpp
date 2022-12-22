#include <iostream>
using namespace std;

int main() {


int n ;
cin >>  n;
while ( n --)
{
    int a , b;
    cin >> a >> b;
    
    a== b ? cout << "NEUTRAL" : (a > b ? cout << "LOSS" : cout << "PROFIT");
    cout << endl;
}
	return 0;
}
