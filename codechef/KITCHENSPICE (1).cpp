#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n ;
	cin >> n ;
	while(n--)
	{
	    int t;
	    cin >> t ;
	    t < 4  ? cout << "MILD" : (t>= 4 && t < 7) ? cout << "MEDIUM" : cout << "HOT";
	    cout << endl;
	}
	return 0;
}
