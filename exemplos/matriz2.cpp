#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x[3][4] = {0};
    int i, j;
    
    for(i = 0; i < 3; i++) {
        printf("Elementos da linha %d: ", i);
        for(j = 0; j < 4; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
