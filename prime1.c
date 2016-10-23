#include<stdio.h>
#include<conio.h>
void main()
{
 int r1,r2,i,flag;
  clrscr();
  printf("Enter the two ranges:");
  scanf("%d %d",&r1,&r2);
  printf("The prime number between two intervals %d and %d is",r1,r2);
  while(r1<r2) {
    flag=0;
    for(i=1;i<=r1/2;++i) {
      if(r1%i==0) {
      flag=0;
      break;
      }
    }
    if(flag==0) {
    printf("%d",r1);
    ++r1;
    }
  }
  getch();
}
