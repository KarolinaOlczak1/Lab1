#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    char C = 200 + 200;
    printf("Char result 400 = %d\n", C); // wypisze -112 bo przekroczy³o zakres

    short S = 200 + 200;
    printf("Short result 400 = %d\n", S); // wypisze 400 bo mieœci siê w zakresie

    int I = 2000000000;
    printf("Int result 2.000.000.000 = %d\n", I); // wypisze 2mld

    long L = 9000000000000;
    printf("Long result 9.000.000.000.000 = %ld\n", L); // dla systemu 32 bit wypisze 2043514880 bo overflow, a dla 64 bit normalnie

    float F = 12.23423423;
    printf("Float result 12.23423423 = %f\n", F); // wypisze 12.234234 - 8 pozycji

    double D = 12.23423423;
    printf("Double result 12.23423423 = %f\n", D); // wypisze to co w float, ale ma dwa razy wiêksz¹ precyzjê

    return 0;
}
