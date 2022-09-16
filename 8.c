#include <stdio.h>

void fiboncci(int);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    fiboncci(num);
    return 0;
}
void fiboncci(int n)
{
    int x;
    if (n > 0)
    {
        fiboncci(n - 1);
        printf("%d", n + n);
    }
}