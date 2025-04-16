// a++ => post increment -> phle use kr lenge fir icrease kr denge
// a = a+1
// ++a => pre increment -> phle increase krenge fir use krenge

// #include <stdio.h>
// int main()
// {
//     // unary operator

//     int num = 10;

//     printf("%d\n", num++); // 10

//     printf("%d\n", num); // 11
// }

// #include <stdio.h>
// int main()
// {
//     // unary operator

//     int num = 10;

//     printf("%d\n", ++num); // 11

//     // printf("%d\n", num); // 11
// }

// a-- => post decrement -> phle use krenge fir decrease krenge
// --a => pre decrement -> phle decrease krenge fir use krenge

// #include <stdio.h>
// int main()
// {
//     // unary operator

//     int num = 10;

//     printf("%d\n", --num); // 9

//     printf("%d\n", num); //9
// }

// #include <stdio.h>
// int main()
// {
//     // unary operator

//     int num = 10;

//     printf("%d\n", num--); // 10

//     printf("%d\n", num); // 9
// }

// #include <stdio.h>
// int main()
// {
//     // unary operator

//     int num = 10;

//     num = num++ + ++num;

//     printf("%d\n", num); // 22

// }

// #include <stdio.h>
// int main()
// {
//     int num1 = 10;

//     int num2 = 20;

//     printf("%d\n", num1+num2);  // 30
//     printf("%d\n", num1 - num2); // -10
//     printf("%d\n", num1 * num2); // 200
//     printf("%d\n", num1 / num2); //0
//     printf("%d\n", num1 % num2); // 10

// }

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