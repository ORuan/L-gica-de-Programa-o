#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){
    int n=1005,i=0;
    while (i != 1){
        if (n % 11 == 5){
            printf("%d", n);
             i++;
        }
        n++;
    }
} 