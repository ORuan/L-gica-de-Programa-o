#include<stdio.h>
#include<stdlib.h>

float media(float a,float b,float c){
    float resultado;
    resultado = (a+b+c)/3;
    return resultado;
}
main(){
    int v1,v2,v3;
    scanf ("%d", &v1);
    scanf ("%d", &v2);
    scanf ("%d", &v3);
    printf("%f", resultado(v1,v2,v3));
}
