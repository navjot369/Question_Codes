import java.util.Scanner;

public class Lucas_recr {
    public static double Lucas(int num) {
        if(num==1||num==2||num==3) {
            return 1;
        }
        return Lucas(num-1)+Lucas(num-2)+Lucas(num-3);
    }
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number of terms: ");
        int term = scan.nextInt();
        scan.close();
        System.out.println("The number is " + Lucas(term));
    }
    
}
