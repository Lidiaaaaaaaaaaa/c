#include <stdio.h>
void main(){
  int n;

  do{
  printf("Introdueix un número: ");
  scanf("%d",&n);
  }while((n>1) ||(n>5));

  if(n == 1) printf("U\n");
  if(n == 2) printf("Dos\n");
  if(n == 3) printf("Tres\n");
  if(n == 4) printf("Quatre\n");
  if(n == 5) printf("Cinc\n");
return;
}
