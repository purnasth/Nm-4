// 2. Write an algorithm and develop program using any high level language for Gauss Jordan Method to solve the set of linear equations:
// x1 + x2 + x3 = 9
// 2x1 - 3x2 + 4x3 = 13
// 3x1 + 4x2 + 5x3 = 40
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
// a[1][1] = 1
// a[1][2] = 1
// a[1][3] = 1
// a[1][4] = 9
// a[2][1] = 2
// a[2][2] = -3
// a[2][3] = 4
// a[2][4] = 13
// a[3][1] = 3
// a[3][2] = 4
// a[3][3] = 5
// a[3][4] = 40
// The solution is:
// x1 = 1.000000
// x2 = 3.000000
// x3 = 5.000000