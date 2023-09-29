/*
A
B C
D E F
G H I J
*/
#include <stdio.h>
int main(){
    int n = 4, r, c, i = 65;
    for(r = 1; r <= n; r++){
        for(c = 1; c <= r; c++){
            printf("%c ", i);
            i++;
        }
        printf("\n");
    }
    return 0;
}