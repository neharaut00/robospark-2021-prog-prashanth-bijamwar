#include <stdio.h>
#include <stdlib.h>
int main()
{
 
    int* num;
    int n, i;
 
    printf("Enter number of elements:");
    scanf("%d",&n);
 
    num = (int*)malloc(n * sizeof(int));

    printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) 
        {
            printf("enter the element");
            scanf(" %d",&num[i]);
        }
        for (i = 0; i < n; ++i) {
            printf("%d, ", num[i]);
        }
    printf("\n\nEnter the new size of the array: ");
    scanf("%d",&n);
    num = realloc(num, n * sizeof(int));
    for (i = 0; i < n; ++i) 
        {
            printf("Enter element of array-");
            scanf(" %d", &num[i]);
        }
 
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", num[i]);
        }
    return 0;
}
