import java.util.*;
import java.lang.Math;

public class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);

            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();

            double x1 = (-b + Math.sqrt((b * b) - (4.0 * a * c))) / (2.0 * a);
            double x2 = (-b - Math.sqrt((b * b) - (4.0 * a * c))) / (2.0 * a);

            System.out.println("x1 = " + x1);
            System.out.println("x2 = " + x2);
      }
}