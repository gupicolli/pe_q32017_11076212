#include <stdio.h>
#include <math.h>

typedef struct ponto{
    float x;
    float y;
    float z;
}ponto;

float distancia( ponto a, ponto b ) {
    return (sqrt((b.x - a.x)*(b.x - a.x)+(b.y - a.y)*(b.y - a.y)+(b.z - a.z)*(b.z - a.z)));
}
void printa(float x){
    printf("%.2f", x);
}
int main() {
    ponto p1, p2;
    float dis;
    scanf("%f, %f, %f", &(p1.x), &(p1.y),&(p1.z));
    scanf("%f, %f, %f", &(p2.x), &(p2.y),&(p2.z));
    dis = distancia(p1,p2);
    printa(dis);
}



