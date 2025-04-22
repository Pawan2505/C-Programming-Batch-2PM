#include <stdio.h>

int main()
{
    int a = -11, b = -20;

    if (!(a > 0 || b > 0))
    {
        printf("Both values are less than or equal to 0\n");
    }
    else
    {
        printf("At least one value is greater than 0\n");
    }

    return 0;
}
