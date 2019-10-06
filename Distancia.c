#include <stdio.h>
#include <stdlib.h>

main(){
    int v1,v2;
    printf("------------------");
    scanf("%d %d", &v1 , &v2);
    if (v1 > v2){
        v1 = v1 - v2;
        printf("A distancia é %d", v1);
    }else {
        v2 = v2 - v1;
        printf("A distancia é %d", v2);
    }
}