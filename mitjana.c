#include <stdio.h>
void main(){
    int n1, n2, resultat;
    printf("1r núm:?");
    scanf("%d",&n1);
    printf("2n núm:?");
    scanf("%d", &n2);
    resultat = (n1+n2)/2;
    printf("La mitjana és: %d", resultat);
    return;
}
