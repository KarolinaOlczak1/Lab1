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
    A += 7; // równoważne z poprzednim wierszem, analogicznie można +=, -=, *=, /=
    printf("A after add 7 twice = %d\n", A);

    A = A<<3; //przesunięcie bitowe o 3 miejsca w lewo, czyli pomnożenie przez 2^3
    printf("A=%d\n", A);

    return 0;
}
