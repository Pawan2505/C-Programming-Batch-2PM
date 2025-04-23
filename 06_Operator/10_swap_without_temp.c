// Swapping two variables without using a third variable

#include <stdio.h>
int main()
{
    int x = 10;
    int y = 20;

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Value of x : %d \n", x);
    printf("Value of y : %d\n", y);
}
