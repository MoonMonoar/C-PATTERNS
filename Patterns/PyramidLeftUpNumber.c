/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include <stdio.h>
int main(){
    int n = 5, r, c, s, i;
    for(r = 1; r <= n; r++){
        i = 1;
        s = n - r;
        for(c = r; c > 0; c--){
            printf("%d ", i);
            i++;
        }
        for(c = 1; c <= s; c++){
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}