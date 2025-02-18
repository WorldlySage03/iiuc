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

            double s = (a + b + c) / 2.0;
            double area = Math.sqrt(s * (s - a) * (s - b) * (s - c));

            System.out.println("Area of The Triangle: " + area);
      }
}