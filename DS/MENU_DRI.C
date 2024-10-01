#include<stdio.h>
typedef struct node
{
int info;
struct node *next;
}NODE;
void createlist(NODE *head)
{
int n,count;
NODE *last,*newnode;
printf("how many nodes:");
scanf("%d",&n);
last=head