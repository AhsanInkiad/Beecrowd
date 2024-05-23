import java.io.IOException;
 
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
       
 double n,R,A;
      
      Scanner input=new Scanner(System.in);
      R=input.nextDouble();
      n=3.14159;
      A=n*R*R;      
      System.out.println(String.format("A=%.4f", A));
   
    }
 
}