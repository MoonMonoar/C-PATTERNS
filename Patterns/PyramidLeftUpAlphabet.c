/*
A
A B
A B C
A B C D
A B C D E
*/
#include <stdio.h>
int main(){
    int n = 5, r, c, s, i;
    for(r = 1; r <= n; r++){
        i = 65;
        s = n - r;
        for(c = r; c > 0; c--){
            printf("%c ", i);
            i++;
        }
        for(c = 1; c <= s; c++){
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}