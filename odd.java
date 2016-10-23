class Odd {
  public class void main(String [] args) {
    int limit;
      Scanner s = new Scanner(System.in);
      System.out.println("Enter the limit:");
      limit = s.nextInt();
      System.out.println("The odd numbers between two intervals" + limit);
        for(i=1;i<=limit;i++) {
           if(i%2 !==0) {
             System.out.println(i + "");
             }
           }
     }
}
