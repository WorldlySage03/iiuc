import java.util.*;

public class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);

            System.out.print("Length in Inches: ");
            double lengthInInch = input.nextDouble();
            double lengthInCenti = lengthInInch * 2.54;
            System.out.println("Length in Centimeter: " + lengthInCenti);
      }
}