import java.util.Scanner;

class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);

            int year = input.nextInt();

            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                  System.out.println("Year " + year + " is a leap year");
            }
            else System.out.println("Year " + year + " is not a leap year");

            input.close();
      }
}