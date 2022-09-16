#include <stdio.h>

int calculate(int);
int main()
{
    int num;

    printf("Enter number\n");
    scanf("%d", &num);

    printf("Sum of square of 1st %d natural nums is %d",num, calculate(num));

    return 0;
}
int calculate(int n)
{
    int sum;

    if (n == 0)
        return 0;

    sum = n * n + calculate(n - 1);
        return sum;
}