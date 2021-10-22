#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 10;
    A++;
    printf("A = %d\n", A);

    A--;
    printf("A after decrement = %d\n", A); // wypisze 10 bo odejmuje od A++

    A = A + 7;
    A += 7; // równowa¿ne z poprzednim wierszem, analogicznie mo¿na +=, -=, *=, /=
    printf("A after add 7 twice = %d\n", A);

    A = A<<3; //przesuniêcie bitowe o 3 miejsca w lewo, czyli pomno¿enie przez 2^3
    printf("A=%d\n", A);

    return 0;
}
