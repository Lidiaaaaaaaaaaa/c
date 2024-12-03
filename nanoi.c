/*Problema recursio de les torres de Hanoi

per Xavi Blanes curs 24/25

#includde <stdio.h>

void hanoi(int n, char o, char d, char aux)
{
    if(n==1)printf("Disc 1 de %c a %c/n", o d);
    else

        hanoi(n-1,o,aux);
        printf("Disc %d de %c a %c\n", n,o,d)
        hanoi(n-1,aux,d,o);
        }
return;
}

int main(){
int n;
printf("Hanoi de: ");
scanf("%d" ,&n);
hanoi(n, 'A','C', 'B')
return 0;
}
