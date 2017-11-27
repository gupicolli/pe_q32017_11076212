#include <stdio.h>
#include <stdlib.h>

typedef struct ficha
{
    char nome[100];
    int ra;
    float p1;
    float p2;
    float p3;
    float media;
}ficha;

float media (ficha a)
{
    return ((a.p1+a.p2+a.p3)/3);
}

void media_aluno(char * ficha_alunos, ficha *alunos){
    FILE * fp, *fo;
    fp = fopen(ficha_alunos, "r");
    fo = fopen("media_alunos.txt","w+");
    int i = 0;

    while (!feof(fp))
        {
        fscanf(fp,"\%s \%d \%f \%f \%f", alunos[i].nome, &alunos[i].ra, &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
        alunos[i].media = media(alunos[i]);
        printa(fp,fo,alunos,i);
        i++;
        }
    fclose(fp);
    fclose(fo);

    }

void printa(FILE * fp, FILE * fo,ficha *alunos, int i){
    //acrescenta os 0s à esquerda não-lidos do RA ao arquivo final
    if (i < 9)
        {
            fprintf(fo, "\%s 000\%d \%.2f \%.2f \%.2f \%.2f\n", alunos[i].nome, alunos[i].ra, alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
        } else {
            fprintf(fo, "\%s 00\%d \%.2f \%.2f %.2f %.2f\n", alunos[i].nome, alunos[i].ra, alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
        }
}
int main(int argc, char **argv)
{
    ficha alunos[50];
    media_aluno(argv[1],alunos);
    printf("%s media_alunos.txt", argv[0]);
}
