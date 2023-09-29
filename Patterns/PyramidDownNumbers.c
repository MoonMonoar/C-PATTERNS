/*
1 2 3 4 5 6 7 8 9 
  1 2 3 4 5 6 7
    1 2 3 4 5
      1 2 3
        1
*/
#include <stdio.h>
int main(){
    int n = 5, r, c, i;
    for(r = n; r >= 0; r--){
        i = 1;
        for(c = 1; c <= 2*n-1; c++){
            if(c >= n-(r-1) && c <= n+(r-1)){
                printf("%d ", i);
                i++;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}