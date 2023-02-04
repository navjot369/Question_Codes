import java.util.Scanner;

public class Commission{
    public static void main(String args[]){
        
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter your salary: ");
        int sales = scan.nextInt();
        int comm;
        if(sales<5000){
            comm = 0;
        }else if(sales>5000 && sales<10000){
            comm = 5;
        }else if(sales>10000 && sales<20000){
            comm = 10;
        }else if(sales>20000 && sales<30000){
            comm = 12;
        }else{
            comm = 15;
        }
        double total = (double)sales+(((double)sales)*(((int)comm)/100.0F));
        System.out.println("Total salary will be "+(int)total);
        scan.close();
    }
}