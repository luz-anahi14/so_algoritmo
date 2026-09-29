//Paradigma imperativo con C

#include <studio.h>
int main(){
    int n = 5;
    long resultado = 1;

    for (int i = 1; i < n; i++){
        resultado= resultado *i;
    }

    printf("Factorial de %d = %d\n", n, resultado);
    return 0;
}
