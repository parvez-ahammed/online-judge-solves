#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string str;
	    cin >> str;
	    vector < int > evens;
	    vector < int > odds;

     
	    for (int i = 0 ; i < str.size() ; i++)
	    {
	        if (str[i] == '1')
	            {
	                if ( (i+1) % 2 == 0)
	                    {
	                        evens.push_back(i+1);
	                    }
	                    else 
	                    {
	                         odds.push_back(i+1);
	                    }
	            }
	        
	    }
	    
	    
	        if ( (odds.size() >= 1 && evens.size() >= 1 )  )
	            cout << 1 << endl;
	       else 
	            cout << 2 << endl;
	   
	   
	}
	return 0;
}
