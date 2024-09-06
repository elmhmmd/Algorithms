#include <stdio.h>

int main() {
int i,array[100],swap,x;

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
swap = 0;
for (int k=0; k<i-1; k++)
{
if (array[k]>array[k+1])
{
 x = array [k+1];
 array[k+1] = array[k];
 array[k] = x;
 swap = 1;
}}if (swap != 1) {break;}}
printf("\n");
for(int a=0; a<i ; a++)
{
printf("%d ",array[a]);
}
return 0;
}

