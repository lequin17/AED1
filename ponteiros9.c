#include <stdlib.h>
#include <stdio.h>


int main (){

    float m[3][3];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", &m[i][j]);
        }
        printf("\n");
    }





    return 0;
}