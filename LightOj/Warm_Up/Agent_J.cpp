#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        double r1, r2, r3;
        cin >> r1 >> r2 >> r3;

        double s = (r1 + r2 + r3);

        double a = r1 + r2, b = r1 + r3, c = r2 + r3;

        double triangleArea = sqrt(s * (s - a) * (s - b) * (s - c));

        triangleArea -= .5 * r1 * r1 * acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b));
        triangleArea -= .5 * r2 * r2 * acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c));
        triangleArea -= .5 * r3 * r3 * acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c));

        cout << fixed << setprecision(9) << triangleArea << endl;
    }
    return 0;
}