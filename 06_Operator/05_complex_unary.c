// Complex Expression with Pre/Post Increment

#include <stdio.h>
int main()
{
    int num = 10;

    num = num++ + ++num; // num = 10 + 11 => 21, then num becomes 22

    printf("%d\n", num); // 22
}
