#include <stdio.h>

/**
 * Se crea la funcion que recibe
 * dos parametros de punteros tipo int,
 * y se hace el cambio de valores.
 * @param p_a
 * @param p_b
 */

void cambiarPunteros(int *p_a, int *p_b){
    *p_a=*p_a+*p_b;
    *p_b=*p_a-*p_b;
    *p_a=*p_a-*p_b;
}

int main(){

    int a;
    int b;

    printf("Ingrese valor del puntero a:");
    scanf("%d",&a);
    printf("Ingrese valor del puntero b:");
    scanf("%d",&b);

    cambiarPunteros(&a,&b); // hace llamada al metodo recursivo.

    printf("El número de a es: %d\n", a);
    printf("El número de b es: %d\n", b);


    return 0;
}
