import java.util.* ;

public class Program8{
  public static void main(String args[]){

    Scanner sc = new Scanner(System.in) ;

    int i, c, n, a = 0, b = 1 ;

    System.out.println("Tushar Malhotra\n42513202718\n");
    
    System.out.print("Enter any number:\t") ;
    n = sc.nextInt() ;

    System.out.println("The fibonacci series is:\t") ;
    System.out.print(a + " ") ;
    System.out.print(b + " ") ;

    for(i=2; i<n; i++){
      c = a + b ;
      System.out.print(c + " ") ;
      a = b ;
      b = c ;
    }
  }
}
