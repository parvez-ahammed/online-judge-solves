#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t --)
	{
	    int n ;
	    cin >> n ;
	    string a , b;
	    cin>> a >> b;
	    int ones_a  = 0 , zeros_a = 0,  ones_b  = 0 , zeros_b = 0;
	    
	    for ( int i = 0 ; i < n ; i++ )
	    {
	        if (a[i] == '1')
	            ones_a++;
	  
	         if (b[i] == '1')
	            ones_b++;
	       
	        
	    }
	    
	    if (ones_a == ones_b)
	        cout << "YES" << endl;
	    else 
	        cout << "NO" << endl;
    	}
	return 0;
}
