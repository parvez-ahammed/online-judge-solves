#include <stdio.h>
long fact(long);
// long isPower(long,long);
long main ()
{
    long num,fac,sum=0,digit,i;
    scanf("%d",&num);
    fac=fact(num);

    // if(fac>9999)
    //     {
    //         for (i=0;i<4;i++)
    //             {
    //                 digit=fac%10;
    //                 sum+=digit*isPower(10,i);
    //                 fac/=10;
    //             }
    //     }
    // else 
    //     sum=fac;
    
    printf("%d\n",fac);
}
long fact(long x)
{
    long fac=1,i;
    for(i=1;i<=x;i++)
        fac*=i;
    return fac;
}

// long isPower(long x,long y)
// {
//     long pow=1,i;
//     for(i=1;i<=y;i++)
//     {
//         pow*=x;
//     }
//     return pow;
// }
