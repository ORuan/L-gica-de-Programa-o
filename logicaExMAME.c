#include <stdio.h>
#include <stdlib.h>

int main (){
    int n1=0,n2=0,n3=0,ma=0,me=0,a,b,c,aux;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
                if (n1>n2){
                    aux = n1;
                    n1 = n2;
                    n2 = aux;   
                }
                if (n2>n3){
                    aux = n2;
                    n2 = n3;            
                    n3 = aux;   
                }
                if (n3>n1){
                    aux = n3;
                    n3 = n1;
                    n3 = aux;    
                }
    printf ("%d %d  %d", n1,n2,n3);
    return 0;
}