//Write a program to delete a number in array using function

#include<stdio.h>
#include<conio.h>
void del(int[],int,int); //Function declaration
void main()
{
int a[25],n,i,p;
clrscr();
printf("Enter number of elements in array= ");
scanf("%d",&n);
printf("Enter data in array= ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter position from where you want to delete the number= ");
scanf("%d",&p);
del(a,n,p); //Function call
getch();
}
void del(int a[],int n,int p) //Function definition
{
int i;
for(i=p;i<n;i++)
{
a[i-1]=a[i]; //Shifting numbers
}
printf("After deleting that number= ");
for(i=0;i<n-1;i++)
{
printf("\t%d",a[i]);
}
}