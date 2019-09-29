#include <stdio.h>
#include <stdlib.h>

float media (float n1, float n2, float n3){
    float resultado=0;
    resultado = (n1+n2+n3)/3;
    return (resultado);
}


main (){
    float v1,v2,v3,resultado;
    printf("Digite suas notas");
    scanf ("%f",&v1);
    scanf ("%f",&v2);
    scanf ("%f",&v3);
    resultado = media(v1,v2,v3);
    printf ("%f", resultado);
}
