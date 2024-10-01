#include<stdio.h>
#include<conio.h>
int main()
{
int a[2][2],b[2][2],c[2][2],i,j;
clrscr();
printf("enter value of array a:\n");
   for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
      {
      // printf("Enter values for[%d][%d]:", i, j);
       scanf("%d", &a[i][j]);
      }
    }
 printf("enter value of array b:\n");
    for(i=0;i<2;i++)
      {
	for(j=0;j<2;j++)
	 {
	  scanf("%d", &b[i][j]);
	  }

      }
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
    }
 printf("Result is:\n");
 for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
    printf("%d \t",c[i][j]);
  }
  }
  getch();
  return 0;
}
