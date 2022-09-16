#include <stdio.h>

int calculate(int);
int main()
{
    int num;

    printf("Enter number\n");
    scanf("%d", &num);

    printf("Sum of digits of %d is %d", num, calculate(num));

    return 0;
}
int calculate(int n)
{

    if (n == 0)
        return 0;

    return calculate(n / 10) + (n % 10);
}