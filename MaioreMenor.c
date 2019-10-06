#include <stdio.h>
#include <stdlib.h>
main (){
    int n1,n2,n3,ma;
    printf("------------");
    scanf ("%d %d %d", &n1,&n2,&n3);
    ma = n1;
    if (n2>ma){
        ma = n2;
    }
    if(n3>ma){
        ma = n3;
    }
    printf("O maior é%d", ma);
}