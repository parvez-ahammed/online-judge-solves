#include <iostream>
using namespace std;

int main() {


int t ;
cin >> t;
while ( t--)
{
    int n, x, c;
    
    cin >> n >> x>> c;
    

    int temp ;
    int sum = 0;
    
    int del = 0;
    
    int diff = x- c;
    
    
    for (int i = 0 ; i < n ; i++)
    
    {
        cin >> temp;
        sum+= temp;
        
        if (temp < diff)
        {
             del+=c;
             sum+= (x-temp);
            
        }
           
    }
    
    cout << sum - del << endl;
}
	return 0;
}
