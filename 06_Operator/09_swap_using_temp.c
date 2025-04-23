// Swapping two variables using temporary variable

#include <stdio.h>
int main()
{
    int x = 10;
    int y = 20;
    int temp = x;

    x = y;
    y = temp;

    printf("Value of x : %d \n", x);
    printf("Value of y : %d\n", y);
}
