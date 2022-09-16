#include <stdio.h>

int count(int n);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    printf("%d", count(num));
    return 0;
}
int count(int n)
{
    static int cont = 0;

    if (n == 0)
        return 0;

    cont++;
    count(n / 10);
    return cont;
}