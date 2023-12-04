//Read the start time and end time of a game, in hours and minutes (initial hour, initial minute, final hour, final minute). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,
/*
#include <stdio.h>
int main ()
{
    int start_hour,start_minute,end_hour,end_minute,hour,minute;

    scanf("%d%d%d%d",&start_hour,&start_minute,&end_hour,&end_minute);

    if (start_hour<end_hour)     
            hour=end_hour-start_hour;
    else if (start_hour>end_hour)
            hour=(end_hour+24)-start_hour;
    else if (start_hour==end_hour)
        hour=24;

    if (start_minute<end_minute)     
            minute=end_minute-start_minute;
    else if (start_hour>end_hour)
            minute=(end_minute+60)-start_minute;
    else if (start_minute==end_minute)
        minute=0;

    if (hour==1 && start_minute>end_minute)
        {
            hour=0;
            minute=(end_minute+60)-start_minute;
        }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minute);

    return 0;
}
*/
#include <stdio.h>
 
int main() {
    int h1, h2, hf, m1, m2, mf;
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
    if(m1 > m2) {
        h2 -= 1;
        m2 += 60;
    }
    if(h1 > h2) {
        h2 += 24;
    }
    hf = h2 - h1;
    mf = m2 - m1;
    if(mf == 0 && hf == 0) {
        hf = 24;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);
    return 0;
}

