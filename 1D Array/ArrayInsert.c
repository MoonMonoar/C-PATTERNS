/*
Enter size of the array: 6
Enter elements in array: 3 4 33 6 55 44
Enter element to insert: 999
Enter the element position: 4
Array elements after insertion: 3 4 33 999 6 55 44
*/
#include <stdio.h>
int main(){
    int MAX_SIZE = 100;
    int a[MAX_SIZE];
    int n, i, e, p;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &e);
    printf("Enter the element position: ");
    scanf("%d", &p);
    //As the user will enter the postion from 1 to n, we need to decrement it by 1
    p--;
    //Now, statring from the last element, shift all the elements to the right
    for(i = n; i >= p; i--){
        a[i+1] = a[i];
    }
    a[p] = e; //Put the new element in the position
    printf("Array elements after insertion: ");
    for(i = 0; i < n+1; i++){
        printf("%d ", a[i]);
    }
    return 0;
}