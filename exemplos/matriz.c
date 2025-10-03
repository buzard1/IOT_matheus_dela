#include <stdio.h>
#include <stdlib.h>

int main() {

    int x[10][6] = {0};
    int i, j;

    for(i=0;i<10;i++){
        for(j=0;j<6;j++){
            printf("%3d", x[i][j]);
            }
            printf("\n");
    }

}
