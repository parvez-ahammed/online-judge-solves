#include <iostream>
using namespace std;

int main()
{
    int space, rows;
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i)
    {
        for(space = 1; space <= rows-i; ++space)
            cout <<" ";

        while(k != 2*i-1)
        {
            cout << "*";
            ++k;
        }
        k = 0;
        cout << '\n';
    }    
    return 0;
}