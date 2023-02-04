import java.util.Scanner;

public class Hello{ 
    public static void main(String[] args){
        try (Scanner sc = new Scanner(System.in)) {
            int a = sc.nextInt();
            System.out.println(a+5);
        }
    }
}