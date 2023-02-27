#include <stdio.h>

int fun(int i);

int main()
{
    int k=1,a;
    while(k<5){

        printf("Calling fun for value k = %d\n",k);
        a=fun(k);
        printf("\nValue of a= %d\n\n",a);
        k++;
    }

    return 0;
}
int fun(int i){
    int j;

    printf("Loop outputs : ");
    for(j=0;j<i;j++){
        if((i+j)%2==1){
            printf("%d ",i-j);
        }
        else{
            printf("%d ",i+j);
        }
    }

  
    return i+j;
    
}