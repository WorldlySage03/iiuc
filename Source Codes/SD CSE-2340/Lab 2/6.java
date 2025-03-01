import java.util.*;
import java.lang.Math;

public class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);
            System.out.print("Value of x is: ");
            int x = input.nextInt();
            double y = 0;
            for (int i = 1; i <= 4; i++)
                  y += Math.pow(((double) (x - 1) / x), i) / i;
            System.out.println("Value of y is: " + y);
      }
}