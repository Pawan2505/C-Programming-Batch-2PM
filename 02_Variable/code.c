#include <stdio.h>

int main()
{
    // ========= Integer Types =========

    // Basic int variable
    int num = 100;
    printf("The value of num is: %d\n", num);
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of num: %d bytes\n", sizeof(num));

    // Unsigned int (only stores positive values)
    unsigned int unum = 100;
    printf("The value of unsigned num is: %u\n", unum);
    printf("Size of unsigned int: %d bytes\n", sizeof(unsigned int));

    // Signed int (can store negative values too)
    signed int snum = -100;
    printf("The value of signed num is: %d\n", snum);

    // Short int
    short int shnum = 12;
    printf("Value of short variable: %d\n", shnum);
    printf("Size of short int: %d bytes\n", sizeof(short int));

    // ========= Float Type =========
    float fnum = 12.34;
    printf("Float num: %.1f\n", fnum); // %.1f => one digit after decimal
    printf("Size of float: %d bytes\n", sizeof(fnum));

    // ========= Double Type =========
    double dnum = 12.342;
    printf("Double num: %.2lf\n", dnum); // %.2lf => two digits after decimal
    printf("Size of double: %d bytes\n", sizeof(dnum));

    // ========= Character Type =========
    char ch = 'a';
    printf("Character: %c\n", ch);
    printf("Size of char: %d byte\n", sizeof(ch));

    // ========= String (Character Pointer) =========
    char *username1 = "Sony";
    printf("Username1: %s\n", username1);
    printf("Size of username1 pointer: %d bytes\n", sizeof(username1));

    char *username2 = "Sony Aastha";
    printf("Username2: %s\n", username2);
    printf("Size of username2 pointer: %d bytes\n", sizeof(username2));

    return 0;
}
