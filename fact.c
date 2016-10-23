#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,f=1,n;
printf("Enter the number:");
scanf("%d",n);
while(i<=n) {
  f=f*i;
  i++;
  }
 printf("Factorial number of %d is:%d",n,f);
 getch();
} 
