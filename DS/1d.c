#include<stdio.h>
int main()
{
int a[5];
int b[5];
int i,j;

printf("enter values in array\n");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
printf("%d\n",a[i]);
 }
 printf("enter values of array b\n");

 for(j=0;j<=4;j++)
 {
 scanf("%d",&b[j]);
 }
  for(j=0;j<=4;j++)
  {
printf("%d\n",b[j]);
 }


return 0;
}