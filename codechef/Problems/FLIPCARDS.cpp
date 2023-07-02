#include <iostream>
using namespace std;

int main() {
	
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int a , b;
	    cin >> a>> b;
	    
	    if (a == 0 || b== 0 || a== b)
	    cout << 0 << "\n";
	    else 
	    cout << min(min(a,b),abs(a-b)) << "\n";
	}
	return 0;
}
