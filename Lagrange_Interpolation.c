#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    float x, l, v = 0, ax[10], fx[10], L[10];

    printf("Enter the number of points:\n");
    scanf("%d", &n);

    printf("Enter the value of x:\n");
    scanf("%f", &x);

    for(i = 0; i < n; i++)
    {
        printf("Enter x and f(x) at i = %d:\n", i);
        scanf("%f%f", &ax[i], &fx[i]);
    }

    // Compute Lagrange basis polynomials
    for(i = 0; i < n; i++)
    {
        l = 1.0;
        for(j = 0; j < n; j++)
        {
            if(j != i)
            {
                l = l * ((x - ax[j]) / (ax[i] - ax[j]));
            }
        }
        L[i] = l;   // store Li(x)
    }

    // Compute interpolated value
    for(i = 0; i < n; i++)
    {
        v = v + fx[i] * L[i];
    }

    printf("Interpolated value = %f", v);
    return 0;
}