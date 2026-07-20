import java.util.Random;
import java.util.Scanner;
 class GuessingGame
{
	public static void main(String[] args) {
	Random rand=new Random();
	int numberToGuess=rand.nextInt(100);
	int numberOfTries=0;
	Scanner input=new Scanner(System.in);
	int Guess;
	
	boolean win=false;
	while(win==false)
	{


     System.out.println("guess the number between 1 and 100:");
     Guess=input.nextInt();
     numberOfTries++;
     
    
      if(Guess==numberToGuess)
     {
      win=true;
      System.out.println("you win!");
       break;
      }	
     else if(Guess<numberToGuess)
     {
       System.out.println("your guess is low!");
     }
     else if(Guess>numberToGuess)
     {
       System.out.println("your guess is heigh!");
     }
     if(numberOfTries==5)
     {
     	System.out.println("you loss!");
     	break;
     }
}     
     System.out.println("numberToGuess "+numberToGuess);
     System.out.println("numberToGuess "+numberOfTries+" Tries!");
}
}