#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	long long int n;
	cin >> n ;
	
	while(n--)
	{
	    long long int a , b, x;
	    
	    cin >> a>> b>>x;
	    /*
	    
	    int first = min(a,b);
	    int second = max(a,b);
	   
	   while(first < second)
	   {
	       first += x;
	       second -=x;
	       if (first == second)
	       break;
	   }*/
	   
	    if ( abs(a-b) % (2*x) == 0 )
	    cout << "YES" <<"\n";
	    else 
	    cout << "NO"<< "\n";
	}
	return 0;
}
