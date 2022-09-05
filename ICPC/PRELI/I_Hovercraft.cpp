// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// /**-------Shortend Library-------*/

// int main()
// {

//     while (true)

//     {
//         float a, b;

//         cin >> a >> b;

//         if (a == 0 && b == 0)
//             break;
//         else
//         {
//             float max1 = 1000.01;
//             for (float i = a / 2; i <= a; i += 0.0001)
//             {
//                 float a1 = i;
//                 float h1 = a - a1;
//                 float srt = a1 * a1 - h1 * h1;

//                 srt = sqrt(srt);

//                 float dble = a1 * 2;

//                 float bb = (b + dble - srt);

//                 if (bb <= max1)
//                     max1 = bb;
//                 else if (max1 < bb)
//                     break;
//             }
//             cout << fixed << setprecision(4) << max1 << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**-------Shortend Library-------*/

int main()
{

    while (true)

    {
        float a, b;

        cin >> a >> b;

        if (a == 0 && b == 0)
            break;
        else
        {
            std::cout << std::fixed;
        std::cout << std::setprecision(4);
            float max1=1000.01;
            for (float i=a/2; i<=a; i+=0.0001)
            {

                float a1=i;
                float h1=a-a1;
                float srt = a1*a1 - h1*h1;

                srt = sqrt(srt);

                float dble = a1*2;

                float bb = (b + dble - srt);


                if (bb<=max1)
                {
                    max1=bb;
                    cout<<bb<<endl;
                }





            }
            cout << fixed << setprecision(4) << max1 << endl;

        }
    }

    return 0;
}