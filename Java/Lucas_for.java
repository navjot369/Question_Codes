import java.util.Scanner;

public class Lucas_for {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number of terms: ");
        int num = scan.nextInt();
        scan.close();
        double a=1, b=1, c=1, temp;
        for(int i=1; i<=num; i++) {
            System.out.print(a + ", ");
            temp = a+b+c;
            a = b;
            b = c;
            c = temp;
        }
    }
    
}
