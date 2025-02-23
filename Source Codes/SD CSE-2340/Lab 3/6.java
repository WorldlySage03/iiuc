import java.util.Scanner;
import java.lang.String;

class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);
            System.out.print("Name : ");
            String name = input.nextLine();
            System.out.print("Number of units consumed : ");
            double unit = input.nextDouble();

            System.out.println("Hello, " + name + '!');
            System.out.println("You consumed " + unit + " unit of energy");

            double charge = 100;
            if (unit > 300)
            {
                  charge += (unit - 300) * 3.50;
                  unit = 300;
            }
            if (unit > 100)
            {
                  charge += (unit - 100) * 2.25;
                  unit = 100;
            }
            charge += unit * 1.75;

            if (charge > 1000) charge += (charge * 15) / 100;

            System.out.println("You are charged TK " + charge + "/=");
      }
}