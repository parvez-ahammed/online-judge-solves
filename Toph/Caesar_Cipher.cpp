#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    string str;
    cin.ignore();
    getline(cin, str);
    
    
   int temp_n;

    for ( int i = 0 ; i < str.size() ;i++)
    {
        temp_n = n;
        if (str[i]!= ' ')
        {
            if (str[i] - n >= 'a')
            {
                str[i] -= n;
            }
            else 
            {
                int morels = str[i]- 'a';
                temp_n-=morels;
                str[i] = 'z'-temp_n+1;
               
            }
            

        }
    }

    cout << str;

    return 0;
}
