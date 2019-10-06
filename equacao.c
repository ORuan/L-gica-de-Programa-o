#include <stdio.h>
#include <stdlib.h>

main(){
    int x,y,resultado;
    printf("Digite os valores de x e y");
    scanf("%d %d", &x,&y);
    resultado = (3 + x - (y * 3));
    printf ("%d", resultado);
}