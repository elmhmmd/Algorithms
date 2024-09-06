#include <stdio.h>

int main() {
int i,tableau[100],array[100],x;

printf("combien d'entier voulez vous saisir dans le tableau? ");
scanf("%d",&i);
for (int j=0; j<i ; j++)
{
printf("Veuillez saisir l'element numero %d: ",j);
scanf("%d",&array[j]);
tableau[j]=array[j];
}
for (int y=0;y<i;y++)
{
for (int k=0; k<i; k++)
{
if (array[k]>array[k+1])
{
 x = array [k+1];
 array[k+1] = array[k];
 array[k] = x;
}}}
for(int a=0; a<i ; a++)
{
printf("%d ",tableau[a]);
}
printf("\n");
for(int a=0; a<i ; a++)
{
printf("%d ",array[a]);
}
return 0;
}

