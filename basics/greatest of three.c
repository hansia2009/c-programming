#include <stdio.h>

int main()
{
    int a, b, c, greatest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        greatest = a;
    else if (b >= a && b >= c)
        greatest = b;
    else
        greatest = c;

    printf("Greatest number = %d\n", greatest);

    return 0;
}