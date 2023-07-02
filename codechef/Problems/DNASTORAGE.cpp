#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	
	while(tc--)
	{
	    int n,s ; 
	    cin >> n;
	
	    string v;
	    string arr;
	    char ch;
	    for (int i = 0 ; i<n;i++)
	    {
	        cin >> ch;
	        arr.push_back(ch);
	        
	        
	    }
	    
	   // cout  << "The incoming string is  "<<arr <<endl;
	    
	     for (int i = 0 ; i<n;i+=2)
	    {
	       if ( arr[i] == '0' && arr[i+1]=='0')
	       {
	           v.push_back('A');
	       }
	       else if ( arr[i] == '0' && arr[i+1]=='1')
	       {
	           v.push_back('T');
	       }
	       else if ( arr[i] == '1' && arr[i+1]=='0')
	       {
	           v.push_back('C');
	       }
	       else if ( arr[i] == '1' && arr[i+1]=='1')
	       {
	           v.push_back('G');
	       }
	    }
	    
	    
        
       // cout  <<"Ther outgoing array is "<< v <<endl;
        cout  << v <<endl;
	   
	    
	}
	return 0;
}
