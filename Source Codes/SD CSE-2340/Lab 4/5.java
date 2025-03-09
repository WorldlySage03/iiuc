import java.util.Scanner;

public class Main
{
      public static void main(String[] args)
      {
            Scanner in =  new Scanner(System.in);
            int n = in.nextInt();

            for (int i = 1; i < n; i++)
            {
                  for (int k = 1; k < n - i; k++)
                        System.out.print(" ");
                  int j = 1;
                  while (j <= i)
                  {
                        System.out.print(j);
                        j++;
                  }
                  j -= 2;
                  while (j > 0)
                  {
                        System.out.print(j);
                        j--;
                  }
                  for (int k = 1; k < n - i; k++)
                        System.out.print(" ");
                  System.out.println();
            }
      }
}