#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
    FILE *p1, *p2;
    char c;
    char s[100];

    p1= fopen("input.c","r");
    p2= fopen("header.txt","w");
    //p3= fopen("header2.txt","w");


    if(!p1)
    {
        printf("\nFile can't be opened");
    }
    else
    {
        while((c=fgetc(p1))!=EOF)
        {
            if((c=='\n')||(c=='\t'))
            {
                continue;
            }
            else
            {
                fputc(c,p2);
            }
        }
    }

    fclose(p1);
    fclose(p2);

    p2= fopen("header.txt","r");
    while((c=fgetc(p2))!=EOF)
        printf("%c",c);

    fclose(p2);
}

