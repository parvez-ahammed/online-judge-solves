#include <iostream>
using namespace std;

int main() {

int n ;

cin >> n;
while (n --)
{
    int a , b;
    cin >> a>> b;
    
     (a+b) % 2 == 0  ?  cout << (a+b) /2 : cout << -1 ;
   
    cout << endl;
    
}

	return 0;
}
