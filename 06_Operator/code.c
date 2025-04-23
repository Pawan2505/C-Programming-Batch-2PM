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

// #include <stdio.h>

// int main()
// {

//     int num1 = 10;
//     int num2 = 20;
//     int num3 = 40;

//     printf("%d\n", num1 == num2); // 0
//     printf("%d\n", num1 > num2);  // 0
//     printf("%d\n", num1 < num2);  // 1
//     printf("%d\n", num1 >= num2); // 0
//     printf("%d\n", num1 <= num2); // 1
//     printf("%d\n", num3 == num2); // 0
//     printf("%d\n", num3 <= num2); // 0
//     printf("%d\n", num3 > num2);  // 1
//     printf("%d\n", num3 >= num2); // 1
// }

// #include<stdio.h>
// int main(){

//     int x = 2;
//     int y = 3;

//     // int result = (x + y) * (x + y);
//     int result = x * x + y * y + 2 * x * y;

//     printf("Result : %d", result);

// }

// #include<stdio.h>

// int main(){
//     int x = 10;
//     int y = 20;

//     int temp = x;

//     x = y;

//     y = temp;

//     printf("Value of x : %d \n", x);
//     printf("Value of y : %d\n", y);
// }

// #include <stdio.h>

// int main()
// {
//     int x = 10;
//     int y = 20;

//     x = x + y; // 30
//     y = x - y; // 30-20 => 10
//     x = x - y; // 30 - 10 => 20

//     printf("Value of x : %d \n", x);
//     printf("Value of y : %d\n", y);
// }

// #include <stdio.h>

// int main()
// {
//     int x = 10;
//     int y = 5;

//     int result = x & y;

//     printf("Value of result : %d \n", result);
  
// }

// #include <stdio.h>

// int main()
// {
//     int x = 10;
//     int y = 15;

//     int result = x | y;

//     printf("Value of result : %d \n", result);
// }

// #include <stdio.h>

// int main()
// {
//     int x = 10;
//     int y = 5;

//     int result = x ^ y;

//     printf("Value of result : %d \n", result);
// }

// #include <stdio.h>

// int main()
// {
//     int x = 17;
//     int result = ~x;

//     printf("Value of result : %d \n", result);
// }

// #include <stdio.h>

// int main()
// {
//     int x = 10;
//     int result = x<<2;

//     printf("Value of result : %d \n", result);
// }

#include <stdio.h>

int main()
{
    int x = 10;
    int result = x>>2;

    printf("Value of result : %d \n", result);
}