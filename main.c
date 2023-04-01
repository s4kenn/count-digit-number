#include <stdio.h>
int countDigit(int a)
{
    int count = 0;
    while (a > 0)
    {
        a = a / 10;
        count++;
    }
    return count;
}
int main()
{
    int number;
    printf("Enter the number ");
    scanf("%d", &number);
    printf("There are %d digits in %d", countDigit(number), number);
    return 0;
}
