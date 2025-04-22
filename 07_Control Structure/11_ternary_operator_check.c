#include <stdio.h>

int main()
{
    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    (age >= 18)
        ? printf("You can watch the movie.\n")
        : printf("You can only watch cartoons.\n");

    return 0;
}
