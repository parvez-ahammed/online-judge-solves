#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    

    double a,r1,r2,r3,r4;

    while (scanf ("%lf %lf %lf %lf %lf",&a,&r1,&r2,&r3,&r4) != EOF)
    {
        
        printf ("%0.3lf\n",a*a - ((r1*r1+r2*r2+r3*r3+r4*r4) * acos(-1.0) * 0.25));
    }
        

    return 0;
}