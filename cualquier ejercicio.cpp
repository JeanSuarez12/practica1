#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>



int main()
{
    int n1, n2, suma;

    printf( "\n   Poner primer numero : " );
    scanf( "%d", &n1 );
    printf( "\n   Poner segundo numero : " );
    scanf( "%d", &n2 );

    suma = n1 + n2;

    printf( "\n   La suma es: %d", suma );

    return 0;
}
