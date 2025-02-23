import java.util.Scanner;

class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);

            int A = input.nextInt();
            int B = input.nextInt();
            int C = input.nextInt();
            int D = input.nextInt();
            char ch = 'A';

            if (A < B)
            {
                  int t = A;
                  A = B;
                  B = t;
                  ch = 'B';
            }
            if (A < C)
            {
                  int t = A;
                  A = C;
                  C = t;
                  ch = 'C';
            }
            if (A < D)
            {
                  int t = A;
                  A = D;
                  D = t;
                  ch = 'D';
            }

            System.out.println(ch + " is the largest number.");
      }
}