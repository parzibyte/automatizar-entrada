/*
    https://parzibyte.me/blog
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char nombre[50];
    int edad;
    double altura;
    // Leer nombre
    printf("Ingresa nombre: ");
    fgets(nombre, 50, stdin);
    nombre[strlen(nombre) - 1] = '\0';
    // Leer los demás datos
    printf("Ingresa edad: ");
    scanf("%d", &edad);
    printf("Ingresa altura: ");
    scanf("%lf", &altura);
    printf("Hola %s. Tu edad es %d y tu altura es %.3lf", nombre, edad, altura);

    return 0;
}
