#include <stdio.h>

int main()
{
    float math, english, science;

    printf("Enter Math marks: ");
    scanf("%f", &math);
    printf("Enter English marks: ");
    scanf("%f", &english);
    printf("Enter Science marks: ");
    scanf("%f", &science);

    float total = math + english + science;
    float average = total / 3;

    printf("Average marks of all three subjects: %.2f\n", average);

    return 0;
}
