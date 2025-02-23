import java.util.Scanner;

public class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);
            System.out.println("Welcome to the game of Rock, Paper, Scissors");
            System.out.print("What is your move? (1-Rock), (2-Paper), (3-Scissor) ");
            int user_choice = input.nextInt();
      }
}

import java.util.Scanner;
import java.lang.Math;
import java.lang.String;

public class Main
{
      public static void main(String[] args)
      {
            Scanner input = new Scanner(System.in);
            String a = "Tasin";
            String b = input.next();

            if (a.equals(b)) System.out.println("Same");
      }
}

Scanner input = new Scanner(System.in);

            System.out.println("Welcome to the game of Rock, Paper & Scissors!");
            System.out.println("What is your move? (1-Rock), (2-Paper), (3-Scissor)");
int user_choice = input.nextInt();
int random = (int) (Math.random() * 10);

/*
 * 1 - 3 Rock
 * 4 - 6 Paper
 * 7 - 9 Scissor
 */

            if ()