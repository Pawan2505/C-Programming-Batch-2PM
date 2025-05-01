// #include <stdio.h>

// int main()
// {
//     int num1 = 0;
//     printf("%d ", num1);
//     int num2 = 1;
//     printf("%d ", num2);

//     for (int i = 2; i < 6; i++)
//     {
//         int num3 = num1 + num2;

//         printf("%d ", num3);

//         num1 = num2;
//         num2 = num3;
//     }
// }

// // continue

// #include <stdio.h>

// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {

//         if (i == 5)
//         {
//             continue;
//         }
//         printf("%d ", i);
//     }
// }

// break

// #include <stdio.h>

// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {

//         if (i == 5)
//         {
//             break;
//         }
//         printf("%d ", i);
//     }
// }

#include <stdio.h>
int main()
{
    int sum = 0;
    for (int num = 1; num <= 5; num++)
    {
        sum += num;
    }

    printf("%d ", sum);
}