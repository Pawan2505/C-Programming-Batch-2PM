// #include<stdio.h>
// int main(){
//     int num = 20;
//     printf("Num : %d\n", num);
//     num = 50; // re-assign
//     printf("Num : %d", num);
// }

// #include <stdio.h>
// int main()
// {
//    const int NUM = 20;
//     // NUM = 50; // re-assign // not ok
//     printf("Num : %d", NUM);
// }

//  always write const variable in capital

// #include <stdio.h>
// int main()
// {
//     //  const variable can not re-assign and also it should declare and assign in same line.
//     const int NUM;
//     // num = 50;  // not ok
//     printf("Num : %d", NUM);
// }

// micro

// #include<stdio.h>
// #define PI 3.14

// int main(){
//     printf("%0.2f", PI);
// }

// #include <stdio.h>
// #define PI 3.14

// int main()
// {

//     float radius = 2;
//     printf("Area of circle : %0.2f", PI * radius * radius);
// }

// #include <stdio.h>
// #define x 10
// #define y 20

// int main()
// {
//     x = 300; // not ok
//     int sum = x + y;

//     printf("Sum : %d", sum);
// }

#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    printf("Number is : %d", num);
}