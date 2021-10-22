#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Podaj dwie liczby calkowite: ");
    scanf("%d%d", &x, &y);
    printf("Wynik dodawania: %d\n", x+y);

    float a, b;

    printf("Podaj dwie liczby rzeczywiste: ");
    scanf("%f%f", &a, &b);

    if(b != 0)
    {
        printf("Wynik dzielenia a/b: %f\n", a/b);// działanie wykonane tylko jeśli b różne od 0
    }
    else
    {
        printf("Nie można dzielić przez zero!\n");//jeśli b=0 wyświetli się komunikat
    }


    return 0;
}
