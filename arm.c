#include<stdio.h>
#include<conio.h>
void main()
{
int num,n,r,result=0;
clrscr();
printf("Enter the number:");
scanf("%d",&num);
n=num;
while(n!=0) {
 r=n%10;
 result=result+r*r*r;
 n=n/10;
 }
 if(result==num) {
   printf("The number is armstrong",num);
   }
 else {
   printf("The number is not armstrong",num);
   }
  getch();
}
