import java.util.Scanner;

public class Loops{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int k;
        do{
            k = scan.nextInt();
        }while(k>=0);
        scan.close();

    }
}