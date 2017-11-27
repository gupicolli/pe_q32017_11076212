#include <stdio.h>
#include <stdlib.h>
typedef struct cron {
    int m;
    int s;
    int dec;
}cron;
cron diferenca(cron a, cron b){
    cron c;
    if (a.m > b.m){
        c = a;
        a = b;
        b = c;
    }
    c.m   =  b.m - a.m;
    c.s   =  b.s - a.s;
    c.dec =  b.dec - a.dec;

    if (c.s < 0) {
        c.s += 60;
        c.m--;
    }
    if (c.dec < 0){
        c.dec += 100;
        c.s--;
    }
    return c;
}
void print (cron c){
    printf("%dm %ds %d", c.m, c.s, c.dec);
}
int main (){
    cron a,b;
    scanf("%dm %ds %d", &(a.m),&(a.s),&(a.dec));
    scanf("%dm %ds %d", &(b.m),&(b.s),&(b.dec));

    print(diferenca(a,b));
    return 0;
}
