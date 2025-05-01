// #include<stdio.h>

// int main(){
//     // statement1

//     while(statement2){

//         // statement3
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int num = 1;

//     while (num<=10)
//     {
//         printf("%d\n", num);

//         num++;
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int num = 10;

//     while (num >= 1)
//     {
//         printf("%d\n", num);

//         num--;
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int num = 10;

//     do
//     {
//         printf("%d\n", num);

//         num--;
//     } while (num >= 1);
// }

// #include <stdio.h>

// int main()
// {
//     int num = -10;

//     do
//     {
//         printf("%d\n", num);

//         num--;
//     } while (num >= 1);
// }

#include <stdio.h>
int main()
{
    for (int year = 2020; year <= 2040; year++)
    {
        if (year % 400 == 0)
        {
            printf("%d Leap Year!\n", year);
        }
        else if (year % 4 == 0 && year % 100 != 0)
        {
            printf("%d Leap Year!\n", year);
        }
        }
}