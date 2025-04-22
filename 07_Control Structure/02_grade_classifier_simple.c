#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Grade A\n");
    }
    else if (marks >= 80)
    {
        printf("Grade B\n");
    }
    else if (marks >= 70)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Sorry, Please try next time!\n");
    }

    return 0;
}
