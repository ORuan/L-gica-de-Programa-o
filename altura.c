#include <stdio.h>
#include <stdlib.h>

main(){
    float h;
    int idade;
    printf("Digite sua altura e sua idade");
    scanf("%f", &h);
    scanf("%d", &idade);
    if ((h>1,75) && (idade > 16)){
        printf("Voce pode participar");
    }else {
        printf("Voce nao pode participar");
    }
}