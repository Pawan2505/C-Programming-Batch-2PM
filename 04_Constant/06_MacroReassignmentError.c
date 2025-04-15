#include <stdio.h>
#define X 10
#define Y 20

// Error: macro values can't be reassigned
int main()
{
    // X = 300; // Error: macros can't be reassigned
    int sum = X + Y;
    printf("Sum : %d", sum);
}
