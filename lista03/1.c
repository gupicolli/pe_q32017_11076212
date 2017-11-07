#include <stdio.h>
int compara(char * s) {
    int i = 0;
    for (i=0; s[i]; (s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u')  ? i++ : *s++);
    return i;
}

int main () {
    char entrada[255];
    fgets(entrada, 255, stdin);
    printf("%d", compara(entrada));
    return 0;



}
