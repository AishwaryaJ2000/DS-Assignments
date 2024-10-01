#include<stdio.h>
#include<conio.h>
int partition(int a[],int lb,int ub)
{
int up,dn;
int temp,pivot;
up=ub;
dn=lb+1;
pivot=a[lb];
do
{
while((a[dn] <pivot)&&(dn<=ub))
 dn++;
 while((a[up]>pivot)&&(up>lb))
 up--;
 if(dn<up)
 {
 temp=a[dn];
 a[dn]=a[up];
 a[up]=temp;
 }
 } while(dn<up);
 a[lb]=a[up];
 a[up]=pivot;
 return up;
 }
 void QuickSort(int a[],int lb,int ub)
 {
 int j;
 if(lb<ub)
 {
 j=partition(a,lb,ub);
 QuickSort(a,lb,j-1);
 QuickSort(a,j+1,ub);
 }
 }
 void main()
{
int a[20],i,n;
clrscr();
printf("\nHow many numbers:");
scanf("%d",&n);
printf("\n Enter the unsorted numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
QuickSort(a,0,n-1);
printf("\n the sorted list is:" );
for(i=0;i<n;i++)
printf("%d\t",a[i]);
getch();
}