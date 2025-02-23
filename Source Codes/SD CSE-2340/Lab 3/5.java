import java.util.Scanner;

class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);
            int score = input.nextInt();
            char grade;

            if (score >= 80) grade = 'A';
            else if (score >= 65) grade = 'B';
            else if (score >= 50) grade = 'C';
            else if (score >= 40) grade = 'D';
            else grade = 'F';

            System.out.println("Grade: " + grade);
      }
}