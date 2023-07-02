#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	while(n--)
	{
	    int x, y,z;
	    cin >> x>> y>>z;
	    
	    if ( y<= z) cout << x << endl;
	    else if (y%z == 0) cout << (y/z) * x << endl;
	    else cout <<  ((y/z) * x ) +x<< endl;
	}
	return 0;
}
