
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     bool yes = true;
//     int digit_count = 0;

//     if (n > 0)
//     {
//         while (n)
//         {
//             if (n % 10 == 4 || n % 10 == 7)
//             {
//                 if (yes) yes = true;
//                 digit_count ++;
//                 n /= 10;
//             }
//             else
//             {
//                 n /= 10;
//                 yes = false;
//             }
//         }
//     }

//   //fuck you nearly lucky number
//     if (yes == true || digit_count == 4 || digit_count == 7)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;

//     return 0;
// } works for both lucky and nearly lucky

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n; 
    cin >> n;
    
    int digit_count = 0;

    while (n)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            digit_count++;
        }
        n /= 10;
    }
   
    if ( digit_count == 4 || digit_count == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}