import java.util.Scanner;

public class recur_fact {
    public static int fact(int num) {
        if(num==0){
            return 0;
        } else if(num==1) {
            return 1;
        }
        return fact(num-1)+fact(num-2);
        }

    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the term to be printed: ");
        int term = scan.nextInt();
        scan.close();
        System.out.print(fact(term));
    }
}

