#include <stdio.h>

void main() {
    int a[3][3];
    int i, j, sum = 0;

    printf("Enter the elements of the 5x3 sub-matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < 3; i++)
        {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
        sum = sum + a[i][i];
    }

    printf("\nThe sum of the main diagonal elements is: %d\n", sum);
}
