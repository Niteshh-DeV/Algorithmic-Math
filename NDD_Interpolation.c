#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    float v = 0, p, xv;
    float x[10], fx[10], a[10];

    // Input number of points
    printf("Enter the number of points: ");
    scanf("%d", &n);

    // Input the value of x where interpolation is required
    printf("Enter the value of x to interpolate: ");
    scanf("%f", &xv);

    // Input data points
    for (i = 0; i < n; i++) {
        printf("Enter x[%d] and f(x[%d]): ", i, i);
        scanf("%f %f", &x[i], &fx[i]);
    }

    // Initialize the divided difference table
    for (i = 0; i < n; i++)
        a[i] = fx[i];

    // Calculate divided differences
    for (i = 1; i < n; i++) {
        for (j = n - 1; j >= i; j--) {
            a[j] = (a[j] - a[j - 1]) / (x[j] - x[j - i]);
        }
    }

    // Calculate interpolated value using Newton's formula
    for (i = 0; i < n; i++) {
        p = 1;
        for (j = 0; j < i; j++) {
            p *= (xv - x[j]);
        }
        v += a[i] * p;
    }

    printf("Interpolated value = %f\n", v);
    return 0;
}