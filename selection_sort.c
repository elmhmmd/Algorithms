#include <stdio.h>

int main() {
int z,x,i,array[100];

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
for (int y=0;y<i;y++)
{
int k = y; 
for (x=y+1;x<i;x++)
{
if (array[x]<array[k]){
k = x;
}
}
z = array[k];
array[k] = array [y]; 
array[y] = z;
}
printf("\n");
for (int a=0;a<i; a++)
{
printf("%d ",array[a]);
}
return 0;}
