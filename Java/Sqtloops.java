import java.util.Scanner;

public class Sqtloops{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int num = scan.nextInt();
        System.out.print("Enter the index: ");
        int index = scan.nextInt();
        scan.close();
        int answer = 1;
        for(int i=1;i<=index;i++){
            answer*=num;
        }
        System.out.println("Answer is " + answer);
    }
}