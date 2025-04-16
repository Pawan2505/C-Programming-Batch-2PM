// Relational Operators

#include <stdio.h>
int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 40;

    printf("%d\n", num1 == num2); // 0
    printf("%d\n", num1 > num2);  // 0
    printf("%d\n", num1 < num2);  // 1
    printf("%d\n", num1 >= num2); // 0
    printf("%d\n", num1 <= num2); // 1
    printf("%d\n", num3 == num2); // 0
    printf("%d\n", num3 <= num2); // 0
    printf("%d\n", num3 > num2);  // 1
    printf("%d\n", num3 >= num2); // 1
}
