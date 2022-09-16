#include <stdio.h>

int evenNums(int);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    printf("Sum of 1st %d even natural numbers is %d", num, evenNums(num));

    return 0;
}
int evenNums(int n)
{
    int sum;

    if (n == 0)
        return 0;

    sum = (2 * n) + evenNums(n - 1);
    return sum;
}