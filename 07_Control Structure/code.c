// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter you age : ");
//     scanf("%d", &age);

//     if(age>=18){
//         printf("You are eligible for voting!");
//     }else{
//         printf("Sorry, You are not eligible for voting!");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int marks;
//     printf("Enter your marks : ");
//     scanf("%d", &marks);

//     if(marks >= 90){
//         printf("Grade A\n");
//     }

//   else if (marks >= 80)
//     {
//         printf("Grade B\n");
//     }

//    else if (marks >= 70)
//     {
//         printf("Grade C\n");
//     }
//     else{
//         printf("Sorry, Please try next time!");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int marks;
//     printf("Enter your marks : ");
//     scanf("%d", &marks);

//     if (marks >= 80 && marks <= 100)
//     {
//         if (marks >= 90)
//         {
//             printf("Grade A");
//         }else{
//             printf("Grade B");
//         }
//     }
//     else if(marks>=60 && marks<=80){
//         if(marks>=70){
//             printf("Grade C!");
//         }else{
//             printf("Grade D");
//         }
//     }else{
//         printf("Sorry, you are not eligible!");
//     }
// }


// #include <stdio.h>


// int main()
// {
//     int a = -11, b = -20;

//     if (a > 0 || b > 0)
//     {
//         printf("Any one of the given value is greater than 0\n");
//     }
//     else
//     {
//         printf("Both values are less than 0\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = -11, b = -20;

//     if (!(a > 0 || b > 0))
//     {
//         printf("Any one of the given value is greater than 0\n");
//     }
//     else
//     {
//         printf("Both values are less than 0\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int aadarsh = 50;

//     aadarsh += 100;

//     printf("Total amount : %d", aadarsh);
// }

// #include <stdio.h>

// int main()
// {
//     int aadarsh = 50;

//     aadarsh -= 10;

//     printf("Total amount : %d", aadarsh);
// }

// #include<stdio.h>
// int main(){
//     int num1,num2;

//     printf("Enter first number : ");
//     scanf("%d", &num1);
//     printf("Enter second number : ");
//     scanf("%d", &num2);

//     if(num1<num2){
//         printf("%d is smallest!",num1);
//     }else{
//         printf("%d is smallest!",num2);
//     }
// }


// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter Number : ");
//     scanf("%d", &num);

//     if(num==0){
//         printf("Nutral");
//     }
//     else if(num<0){
//         printf("Negative");
//     }else{
//         printf("Positive");
//     }
// }

// #include <stdio.h>
// int main(){
//     float math,english,science;
//     printf("Enter Math marks : ");
//     scanf("%f", &math);
//     printf("Enter english marks : ");
//     scanf("%f", &english);
//     printf("Enter science marks : ");
//     scanf("%f", &science);

//     float sumMarks = math + english + science;

//     float avg = sumMarks / 3;

//     printf("Average marks of all three subject is : %.2f", avg);
// }


#include<stdio.h>

int main(){
    int age;
    printf("Enter Age : ");
    scanf("%d", &age);

    (age >= 18) ? printf("Your can watch movie") : printf("You only can watch cartoon!");
}