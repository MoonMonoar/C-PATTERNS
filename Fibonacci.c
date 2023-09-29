//Problem - Make the fibonacci patern
#include <stdio.h>
int main(){
    int n, x = 0, y = 1, c;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%d %d ", x, y);
    for(int i = 1; i <= n; i++){
        int c = x+y;
        printf("%d ", x+y);
        x = y;
        y = c;
    }
    return 0;
}