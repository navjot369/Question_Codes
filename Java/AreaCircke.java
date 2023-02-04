import java.util.Scanner;
import java.lang.Math;

public class AreaCircke {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int i = scan.nextInt();
        final double PI = 3.14;
        double Area = Math.pow(i, 2)*PI;
        System.out.print("Area is: ");
        System.out.println(Area);
        scan.close();
    }
    
}
