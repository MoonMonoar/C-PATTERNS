/*
1
2 3
4 5 6
7 8 9 10
*/
#include <stdio.h>
int main(){
    int n = 4, r, c, i = 1;
    for(r = 1; r <= n; r++){
        for(c = 1; c <= r; c++){
            printf("%d ", i);
            i++;
        }
        printf("\n");
    }
    return 0;
}