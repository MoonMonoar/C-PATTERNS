/*
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/
#include <stdio.h>
int main(){
    int n = 5, r, s, v, value;
    for(r = 1; r <= n; r++){
        for(s = 1; s <= n - r; s++){
            printf(" ");
        }
        value = 1;
        for(v = 1; v <= r; v++){
            printf("%d ", value);
            value = value*(r - v)/v;
        }
        printf("\n");
    }
}