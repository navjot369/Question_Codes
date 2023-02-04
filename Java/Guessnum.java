import java.lang.Math;
import java.util.Scanner;

public class Guessnum{
    public static boolean checkuser(int user, int randnum){
        if(user==randnum){
            return true;
        } else {
            if(user>randnum){
                System.out.print("The number is less than ");
                System.out.print(user);
                System.out.println(". Try again!");
            } else {
                System.out.print("The number is more than ");
                System.out.print(user);
                System.out.println(". Try again!");
            }
            return false;
        }
    }

    public static void main(String[] args){
        Scanner Scan = new Scanner(System.in);
        int randnum = (int)(Math.random()*100);
        int user;
        System.out.println("Welcome! Try guessing the number(0 to 99).\nType -1 to give up.");
        do{
            System.out.print("Guess the number: ");
            user = Scan.nextInt();
            if(user==-1){
                System.out.print("Better luck next time! The number was ");
                System.out.print(randnum);
                System.out.println(".");
                break;
            } else {
                if(checkuser(user, randnum)){
                    System.out.print("Hoorah! You guessed the right number ");
                    System.out.print(user);
                    System.out.println(".");
                    break;
                }else{
                    continue;
                }

            }
        }while(user>0);
        Scan.close();
    }
}
