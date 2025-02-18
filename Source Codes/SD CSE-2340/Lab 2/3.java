import java.util.*;
import java.lang.Math;

public class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);

            System.out.print("Radius of a Circle: ");

            int radius = input.nextInt();
            double area = Math.PI * Math.pow(radius, 2);
            double circumference = 2 * Math.PI * radius;

            System.out.println("Area of The Circle: " + area);
            System.out.println("Circumference of The Circle: " + circumference);
      }
}