//Read the start time and end time of a game, in hours. Then calculate the duration of the game, knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours. The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”

#include <stdio.h>
int main ()
{
    int start,end,hour;

    scanf("%d%d",&start,&end);

    if (start<end)     
            hour=end-start;
    else if (start>end)
            hour=(end+24)-start;
    else if (start==end)
        hour=24;

    printf("O JOGO DUROU %d HORA(S)\n",hour);


    return 0;
}