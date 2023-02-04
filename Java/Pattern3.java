import java.util.Scanner;

public class Pattern3 {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number(odd): ");
        int num = scan.nextInt();
        scan.close();

        for(int i=1; i<=num; i++) {
            for(int j=1; j<=(num-i); j++) {
                System.out.print("  ");
            }
            for(int j=1; j<=(2*i-1); j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i=1; i<=num; i++) {
            for(int j=1; j<=i; j++) {
                System.out.print("  ");
            }
            for(int j=1; j<=(2*(num-i)-1); j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    
}
