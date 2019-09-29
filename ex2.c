#include <stdio.h>
#include <stdlib.h>

int mult(float total,float anos,float meses,float dias){
    dias = (meses*30)+dias;
    total = (anos*365)+dias;
    return total;
}
float main(){
    float result, anos, meses, dias;
    scanf ("%f %f %f",&anos,&meses,&dias);
    result = mult(anos,meses,dias);
    printf("%f", result);
}
