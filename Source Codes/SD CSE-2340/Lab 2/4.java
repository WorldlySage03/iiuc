import java.util.*;

public class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);

            int n, sum = 0;

            System.out.print("Number of Subjects: ");
            n = input.nextInt();

            for (int i = 0; i < n; i++)
            {
                  System.out.print("Subject " + (i + 1) + ": ");
                  int temp = input.nextInt();
                  sum += temp;
            }

            System.out.println("Average: " + (double) sum / n + "/100.00");
      }
}