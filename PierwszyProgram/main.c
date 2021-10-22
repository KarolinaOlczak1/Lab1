#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("First Simple Calculator App\n");

    int valueA =6;
    int valueB =2;
    int resultAdd = valueA + valueB;
    int resultSub = valueA - valueB;
    int resultMulti = valueA * valueB;
    int resultDivi = valueA / valueB;
    int resultMod = valueA % valueB;

    printf("Result of add A=%d and B=%d is %d\n", valueA, valueB, resultAdd);
    printf("Result of subtraction A=%d and B=%d is %d\n", valueA, valueB, resultSub);
    printf("Result of multiplication A=%d and B=%d is %d\n", valueA, valueB, resultMulti);
    printf("Result of division A=%d and B=%d is %d\n", valueA, valueB, resultDivi);
    printf("Result of modulo A=%d and B=%d is %d\n", valueA, valueB, resultMod);

    printf("End!");

    return 0;
}
