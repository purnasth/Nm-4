// 1. Write an algorithm and develop program using any high level language for Dolittle LU Factorization Method to solve the set of linear equations:
// 3x1 + 2x2 + x3 = 10
// 2x1 + 3x2 + 2x3 = 14
// x1 + 2x2 + 3x3 = 14
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i, j, k, n;
    float a[10][10], c, x[10];
    printf("\nEnter the size of matrix: ");
    scanf("%d", &n);
    printf("\nEnter the elements of augmented matrix row-wise:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (n + 1); j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= n; i++)
        {
            if (i != j)
            {
                c = a[i][j] / a[j][j];
                for (k = 1; k <= n + 1; k++)
                {
                    a[i][k] = a[i][k] - c * a[j][k];
                }
            }
        }
    }
    printf("\nThe solution is:\n");
    for (i = 1; i <= n; i++)
    {
        x[i] = a[i][n + 1] / a[i][i];
        printf("\n x%d = %f\n", i, x[i]);
    }
    getch();
}

// Output:
// Enter the size of matrix: 3

// Enter the elements of augmented matrix row-wise:
// a[1][1] = 3
// a[1][2] = 2
// a[1][3] = 1
// a[1][4] = 10
// a[2][1] = 2
// a[2][2] = 3
// a[2][3] = 2
// a[2][4] = 14
// a[3][1] = 1
// a[3][2] = 2
// a[3][3] = 3
// a[3][4] = 14

// The solution is:

//  x1 = 1.000000

//  x2 = 2.000000

//  x3 = 3.000000
