import java.util.Scanner;

public class Main
{
      public static void main(String[] args)
      {
            Scanner in =  new Scanner(System.in);
            int n = in.nextInt();
            String ans = "";

            while (n != 0)
            {
                  if (n % 2 == 0) ans += "0";
                  else ans += "1";

                  n /= 2;
            }

            for (int i = ans.length() - 1; i >= 0; i--)
            {
                  System.out.print(ans.charAt(i));
            }
            System.out.println();
      }
}