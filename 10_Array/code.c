// #include<stdio.h>

// int main(){
//     int n = 6;
//     int arr[n];

//     arr[0] = 10;
//     arr[1] = 20;

//     arr[2] = 30;
//     arr[3] = 40;
//     arr[4] = 50;
//     arr[5] = 60;

//     printf("First Element :  %d\n", arr[0]);
//     printf("second Element : %d\n", arr[1]);
//     printf("Third Element : %d\n", arr[2]);
//     printf("Fourth Element : %d\n", arr[3]);
//     printf("Fifth Element : %d\n", arr[4]);
//     printf("Six Element : %d\n", arr[5]);
// }

// #include <stdio.h>

// int main()
// {
//     int n = 6;
//     int arr[n];

//     arr[0] = 10;
//     arr[1] = 20;

//     arr[2] = 30;
//     arr[3] = 40;
//     arr[4] = 50;
//     arr[5] = 60;

//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d \n", arr[i]);
//     }
// }

// #include <stdio.h>

// int main()
// {
//     // int n = 6;
//     int arr[6] = {10, 20, 30, 40, 50, 60};

//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
// }

// #include <stdio.h>

// int main()
// {

//     int arr[6];
//     //  user input :
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter elememnt %d index : ", i);
//         scanf("%d", &arr[i]);
//     }

//     printf("Array :\n");
//     // output :
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
// }

// #include <stdio.h>

// int main()
// {
//     // int n = 6;
//     int arr[] = {10, 20, 30, 40, 50, 60, 56};

//     arr[2] = 300;

//     // size => sizeof()

//     int size = sizeof(arr);

//     int length = sizeof(arr) / sizeof(arr[0]);

//     printf("%d\n", size);

//     printf("Length of array : %d", length);
// }

// #include <stdio.h>

// int main()
// {

//     int arr[7] = {10, 20, 30, 40, 50, 60, 56};
//     int sum = 0;

//     for (int i = 0; i < 7; i++)
//     {
//         sum = sum + arr[i];
//     }

//     printf("Total sum of array element : %d\n", sum);

//     printf("Average array element : %d", sum / 7);
// }

// #include <stdio.h>

// int main()
// {
//     int arr[5] = {12, 45, 67, 8, 63};

//     int largest = arr[0];

//     for (int i = 0; i < 5; i++)
//     {
//         if (largest < arr[i])
//         {
//             largest = arr[i];
//         }
//     }

//     printf("Largest element in array is : %d", largest);
// }

#include <stdio.h>
int main()
{
    int row_size = 4;
    int col_size = 3;
    int arr[row_size][col_size];

    for (int row = 0; row < row_size; row++)
    {

        for (int col = 0; col < col_size; col++)
        {
            printf("Please enter element at %d row and at %d col : ", row, col);
            scanf("%d", &arr[row][col]);
        }
    }

    for (int row = 0; row < row_size; row++)
    {

        for (int col = 0; col < col_size; col++)
        {
            printf("%d ", arr[col][row]);
        }
        printf("\n");
    }
}