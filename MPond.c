#include <stdio.h>
#include <stdlib.h>

main (){
    float n1=0,n2=0,n3=0,result=0;
    printf("______________");
    scanf ("%f", &n1);
    scanf ("%f", &n2);
    scanf ("%f", &n3);
    result = ((n1*2) + (n2*3) +(n3*5))/10;
    printf("%.0f", result);
}