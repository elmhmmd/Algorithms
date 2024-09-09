#include <stdio.h>

int main() {
int x,i,array[100];

printf("combien d'entier voulez vous saisir dans le tableau? ");
scanf("%d",&i);
for (int j=0; j<i ; j++)
{
printf("Veuillez saisir l'element numero %d: ",j);
scanf("%d",&array[j]);
}
for(int a=0; a<i ; a++)
{
printf("%d ",array[a]);
}
for (int y=1;y<i;y++)
{
int k = y-1;
int key = array[y];
while (k>=0 && array[k]>key)
{
 array[k+1] = array[k];
 k--;
}
array[k+1] = key; 
}
printf("\n");
for (int a=0;a<i; a++)
{
printf("%d ",array[a]);
}
return 0;}
