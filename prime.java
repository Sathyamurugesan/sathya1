class
{
public static void main(String [] args)
{
int i,m=0,flag=0,n;
Scanner s = new Scanner(System.in);
System.out.println("Enter the number");
n = s.nextInt();
m=n/2;
for(i=2;i<=m;i++) {
if(n%i==0) {
flag=1;
break;
}
}
if(flag==0) {
System.out.println("Number is prime");
}
else {
System.ou.println("Number is not prime");
}
}
