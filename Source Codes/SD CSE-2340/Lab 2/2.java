import java.util.*;

public class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);

            System.out.print("Temperature in Fahrenheit: ");
            double tempInFar = input.nextDouble();
            double tempInCel = (5 / 9.0) * (tempInFar - 32);
            System.out.println("Temperature in Celsius: " + tempInCel);
      }
}