/*
Enter size of the array: 10
Enter elements in array: -1
-10
100
5
61
-2
-23
8
-90
51
All negative elements in array are: -1, -10, -2, -23, -90
*/
#include <stdio.h>
#define MAX_SIZE 100
int main(){
    int a[MAX_SIZE], size, i, j, k = 0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i = 0; i < size; i++){
        scanf("%d", &a[i]);
    }
    printf("All negative elements in array are: ");
    for(i = 0; i < size; i++){
        if(a[i] >= 0){
            continue;
        }
        if(k > 0){
            printf(", %d", a[i]);
        }
        else {
            printf("%d", a[i]);
        }
        k++;
    }
}