#include <stdio.h>

// Using const keyword — reassignment is not allowed
int main()
{
    const int NUM = 20;
    // NUM = 50; // Error: cannot re-assign const variable
    printf("Num : %d", NUM);
}
