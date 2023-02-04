import java.util.Scanner;

public class Pattern_sqr {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int num = scan.nextInt();
        scan.close();

        for(int i=1; i<=num; i++) {
            for(int j=1; j<=num; j++) {
                if(i==1||i==num||j==1||j==num){
                    System.out.print("* ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}