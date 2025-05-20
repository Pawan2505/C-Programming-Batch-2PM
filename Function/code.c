// #include<stdio.h>

// // Function Definition
// int add(int x, int y){  // x,y -> Parameter

// }

// int main(){
//     // Function Call
//     add(10, 5);  // 10,5 -> argument
// }


// // Type 1: Take something and return something

// #include <stdio.h>

// // Function Definition
// int add(int x, int y)
// {
//     int result = x + y;

//     return result;
// }

// int main()
// {
//     // Function Call
//     printf("Sum of value : %d", add(10, 5));
// }

// // Type 2: Take something and return nothing

// #include <stdio.h>

// // Function Definition
// int add(int x, int y)
// {
//     int result = x + y;

//     printf("Sum of both value : %d", result);
// }

// int main()
// {
//     add(10, 5);
// }

// Type 3: Take nothing and return nothing

// #include <stdio.h>

// // Function Definition
// int add()
// {
//     int x = 10;
//     int y = 5;
//     int result = x + y;

//     printf("Sum of both value : %d", result);
// }

// int main()
// {
//     add();
// }

//Type 4: Take nothing and return something

#include <stdio.h>

// Function Definition
int add()
{
    int x = 10;
    int y = 5;
    int result = x + y;

    return result;
}

int main()
{
  int sum = add();

  printf("Answer : %d", sum);
}