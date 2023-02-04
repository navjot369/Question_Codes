import java.util.Scanner;

public class AreaTriangle {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter first side: ");
        int a = scan.nextInt();
        System.out.print("Enter second side: ");
        int b = scan.nextInt();
        System.out.print("Enter third side: ");
        int c = scan.nextInt();
        double area = a*b*c;
        System.out.print("Area of triangle is: ");
        System.out.print(area);
        System.out.println(" unit square.");
        scan.close();


        
    }
}