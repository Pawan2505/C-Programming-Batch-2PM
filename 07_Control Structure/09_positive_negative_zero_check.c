#include <stdio.h>

int main()
{
    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Neutral\n");
    }
    else if (num < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Positive\n");
    }

    return 0;
}
