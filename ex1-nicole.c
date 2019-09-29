#include <stdio.h>
#include <stdlib.h>

void verificar(a,b){
    printf("%d", a+b);
}
main (){
    int v1,v2;
    scanf ("%d %d", &v1,&v2);
    verificar(v1,v2);
}
