import java.util.Scanner;

class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);

            int hour = input.nextInt();
            double rate = input.nextDouble();

            double gross = hour * rate;
            double net = gross;

            if (gross > 5000)
            {
                  net -= (gross * 5) / 100;
            }

            System.out.println("Gross Pay : " + gross);
            System.out.println("Net Pay   : " + net);
      }
}