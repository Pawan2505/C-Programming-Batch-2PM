#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        if (marks >= 90)
        {
            printf("Grade A\n");
        }
        else
        {
            printf("Grade B\n");
        }
    }
    else if (marks >= 60 && marks < 80)
    {
        if (marks >= 70)
        {
            printf("Grade C\n");
        }
        else
        {
            printf("Grade D\n");
        }
    }
    else
    {
        printf("Sorry, you are not eligible!\n");
    }

    return 0;
}
