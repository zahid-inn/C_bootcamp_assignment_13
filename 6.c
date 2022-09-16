#include <stdio.h>

int fact(int n);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    printf("factorial of %d is %d", num, fact(num));

    return 0;
}
int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);    
}