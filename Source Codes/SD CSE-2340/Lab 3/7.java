import java.util.Scanner;

public class RockPaperScissors {
      public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);

            System.out.println("Let's play Rock, Paper, Scissors!");
            System.out.print("Enter Player 1's choice (rock, paper, or scissors): ");
            String player1Choice = scanner.nextLine().toLowerCase();

            System.out.print("Enter Player 2's choice (rock, paper, or scissors): ");
            String player2Choice = scanner.nextLine().toLowerCase();

            if (player1Choice.equals(player2Choice))
            {
                  System.out.println("It's a tie!");
            }
            else if (player1Choice.equals("rock") && player2Choice.equals("scissors") ||
                     player1Choice.equals("scissors") && player2Choice.equals("paper") ||
                     player1Choice.equals("paper") && player2Choice.equals("rock")) {
                  System.out.println("Player 1 wins!");
            }
            else
            {
                  System.out.println("Player 2 wins!");
            }
      }
}
