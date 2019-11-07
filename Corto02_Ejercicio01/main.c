#include <stdio.h>
#include <math.h>

int convertDecimal(int, int);

int main()
{
    int dec;
    printf("Ingrese un numero binario:");
    scanf("%d",&dec);
    printf("Numero  convertido a decimal es: %d", convertDecimal(dec, 0));
    return 0;
}

/**
 * funcion recursiva que recibe dos parametros
 * para poder convertir a un numero decimal.
 * @param numDecimal
 * @param n
 * @return
 */
int convertDecimal(int numDecimal, int n){
    int exp = n;
    if(numDecimal==0){
        return 0;
    } else {
        return (((numDecimal%10) * pow(2, exp)) + convertDecimal((numDecimal/10), ++exp));
    }
}