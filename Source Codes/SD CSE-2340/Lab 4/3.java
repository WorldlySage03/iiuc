import java.util.Scanner;

public class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);
            int n = input.nextInt();
            int m = input.nextInt();
            int[][] a = new int[n][m];
            int[] rowSum = new int[n], colSum = new int[m];

            for (int i = 0; i < n; i++)
                  for (int j = 0; j < m; j++)
                        a[i][j] = input.nextInt();

            for (int i = 0; i < n; i++)
            {
                  for (int j = 0; j < m; j++)
                  {
                        rowSum[i] += a[i][j];
                  }
            }

            for (int i = 0; i < m; i++)
            {
                  for (int j = 0; j < n; j++)
                  {
                        colSum[i] += a[j][i];
                  }
            }

            for (int i = 0; i < n; i++)
                  System.out.print(rowSum[i] + " ");
            System.out.println();
            for (int i = 0; i < m; i++)
                  System.out.print(colSum[i] + " ");
      }
}