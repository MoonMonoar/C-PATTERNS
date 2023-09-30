/*
        *
      * *
    * * *
  * * * *
* * * * *
*/
#include <stdio.h>
int main(){
    int n = 5, r, c, s;
    for(r = 1; r <= 5; r++){
        s = n - r;
        for(c = 1; c <= s; c++){
            printf("  ");
        }
        for(c = r; c > 0; c--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}