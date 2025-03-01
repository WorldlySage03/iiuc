import java.util.Scanner;

class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);
            int score = input.nextInt();
            String grade;

            if (score >= 80 && score <= 100) grade = "A";
            else if (score >= 65) grade = "B";
            else if (score >= 50) grade = "C";
            else if (score >= 40) grade = "D";
            else if (score >= 0) grade = "F";
            else grade = "Invalid input";

            System.out.println("Grade: " + grade);
      }
}