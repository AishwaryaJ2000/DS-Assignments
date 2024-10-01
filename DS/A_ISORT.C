#include<stdio.h>
#include<conio.h>
void InsertSort(int a[20],int n)
{
int i,j,key;
for(j=1;j<n;j++)
{
 key=a[j];
 for(i=j-1;i>=0;i--)
 {
 if (a[i]>key)
   a[i+1]=a[i];
 else
  break;
  }
  a[i+1]=key;
  }
  }
  void main()
  {
  int a[20],i,n;
  clrscr();
  printf("How many numbers:");
  scanf("%d",&n);
  printf("\n Enter the unsorted elements:");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
 InsertSort(a,n);
 printf("\n The sorted output is");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
  getch();
  }