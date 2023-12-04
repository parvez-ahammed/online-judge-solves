#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[20],str2[20];w
    int flag;
    gets(str1);
    for (int i=strlen(str1)-1,j=0 ;i>=0;i--,j++)
        {
            str2[j]=str1[i];
        }
    str2[strlen(str1)]='\0';      
    for (int i=0;i<strlen(str1);i++)
        {
            if(str1[i]==str2[i])
            {
                flag=1;
            }  
               
            else
            {
                  flag=0;            break ;
            }

        }
    if (flag)
        printf("Yes");
    else
     printf("No");
}
