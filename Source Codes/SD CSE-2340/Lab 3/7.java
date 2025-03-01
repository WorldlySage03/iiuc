import java.util.Scanner;
import java.lang.Math;
import java.lang.String;

public class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);

            System.out.println("Welcome to the game of Rock, Paper & Scissors!");
            System.out.println("What is your move? (1-Rock), (2-Paper), (3-Scissor)");
            int user_choice = input.nextInt();
            int random = (int) (Math.random() * 10);

            /*
             * 1 - 3 Win
             * 4 - 6 Draw
             * 7 - 9 Lose
             */

            if (random <= 3)
            {
                  if (user_choice == 1) System.out.println("Computer plays Scissor.");
                  else if (user_choice == 2) System.out.println("Computer plays Rock.");
                  else System.out.println("Computer plays Paper.");
                  System.out.println("You Win! :)");
            }
            else if (random <= 6)
            {
                  if (user_choice == 1) System.out.println("Computer plays Rock.");
                  else if (user_choice == 2) System.out.println("Computer plays Paper.");
                  else System.out.println("Computer plays Scissor.");
                  System.out.println("It's a Draw! :|");
            }
            else
            {
                  if (user_choice == 1) System.out.println("Computer plays Paper.");
                  else if (user_choice == 2) System.out.println("Computer plays Scissor.");
                  else System.out.println("Computer plays Rock.");
                  System.out.println("Computer Wins! :(");
            }
      }
}

