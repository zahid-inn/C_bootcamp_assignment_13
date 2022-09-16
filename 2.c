#include <stdio.h>

int oddNums(int);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    printf("Sum of 1st %d odd natural numbers is %d", num, oddNums(num));

    return 0;
}
int oddNums(int n)
{
    int sum;

    if (n == 0)
        return 0;

    sum = (2 * n - 1) + oddNums(n - 1);
    return sum;
}