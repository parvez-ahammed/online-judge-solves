#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t;
	while(t--)
	{
	    int n, x;
	    cin >> n >> x;
	    vector<int> a;
	    for (int i = 0 ; i < n; i++)
	    {
	        int temp;
	        cin >> temp;
	        a.push_back(temp);
	
	    }
	    
	   int cost = 0;
	    
	    for (int i = 0 ; i < n; i++)
	    {
	        int temp;
	        cin >> temp;
	        if (a[i] >= x )
	        cost+= temp;
	        
	
	    }
	    
	    cout << cost << endl;
	}
	return 0;
}
