#include<stdio.h>
#include<string.h>
 void bubbleSort(int a[20],int n)
{
int i, temp,pass;
for(pass=1;pass<n;pass++)
 {
 for(i=0;i<=n-pass-1;i++)
 {
 if(a[i]>a[i+1])
 {
 temp=a[i];
 a[i]=a[i+1];
 a[i+1]=temp;
 }
 }
 }
  }
  void main()
  {
  int a[20],i,n;
  clrscr();
  printf("how many numbers:");
  scanf("%d",&n);
  printf("\n Enter the unsorted elements:");
  for(i=0;i<n;i++)

    scanf("%d",&a[i]);

  bubbleSort(a,n);
  printf("\n The sorted output is:");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
  getch();
  }