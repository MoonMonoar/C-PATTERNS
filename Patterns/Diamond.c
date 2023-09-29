/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include <stdio.h>
int main(){
    int n = 5, r, c;
    for(r = 1; r <= n; r++){
        for(c = 1; c <= 2*n-1; c++){
            if(c >= n-(r-1) && c <= n+(r-1)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(r = n-1; r >= 0; r--){
        for(c = 1; c <= 2*n-1; c++){
            if(c >= n-(r-1) && c <= n+(r-1)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}