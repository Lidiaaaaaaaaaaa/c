#include <stdio.h>

double factorial(int n){
    int i;
    float fact;
    fact = 1;
    for(i=1;i<=n;i++) fact = fact * i;
    return fact;
}

int main(){
        int n;
        printf("Dona'm un número per a la calculadora el seu factorial: ");
        scanf("%d", &n);
        printf("El resultat és: %f", factorial(n));
        return 0;
}

