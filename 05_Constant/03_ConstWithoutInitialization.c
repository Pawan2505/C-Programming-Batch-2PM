#include <stdio.h>

// Invalid: const variables must be initialized at declaration
int main()
{
    const int NUM; // Error: not initialized
    // NUM = 50; // Error: cannot assign later
    printf("Num : %d", NUM); // May lead to undefined behavior
}
