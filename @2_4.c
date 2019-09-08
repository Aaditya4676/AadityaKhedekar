#include <stdio.h>
#include <math.h>
#define MAXSIZE 20
 
 void main ()
 
{
    float x[MAXSIZE];
    int  i, n;
    float average, variance, sum = 0, sum1 = 0;
 
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter %d real numbers \n", n);
    for (i = 1; i < n+1; i++)
    {
        scanf("%f", &x[i]);
    }
    /*  Compute the sum of all elements */
    for (i = 1; i < n+1; i++)
    {
        sum = sum + (x[i] -6);
    }
    average = sum / (float)n;
    /*  Compute  variance   */
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow(((x[i] - 6) - average), 2);
    }
    variance = (sum1 / (float)n) -1 ;
    printf("Average of all elements = %.2f\n", average);
    printf("variance of all elements = %.2f\n", variance);
}
