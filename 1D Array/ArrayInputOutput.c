/*
Input size: 10
Input elements: 1
2
3
4
5
6
7
8
9
10
Output: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
*/
#include <stdio.h>
#define MAX_SIZE 100
int main(){
    int a[MAX_SIZE], size, i, j;
    printf("Input size: ");
    scanf("%d", &size);
    printf("Input elements: ");
    for(i = 0; i < size; i++){
        scanf("%d", &a[i]);
    }
    printf("Output: ");
    for(i = 0; i < size; i++){
        printf("%d", a[i]);
        if(i != size-1){
            printf(", ");
        }
    }
}