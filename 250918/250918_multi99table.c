#include <stdio.h>

int main(void){
    printf("-----°ö¼ÀÇ¥-----\n");
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            printf("%2d ", i * j);
        }
        putchar('\n');
    }

    return 0;
}