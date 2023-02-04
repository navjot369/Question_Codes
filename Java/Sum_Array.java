import java.util.Scanner;

public class Sum_Array {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int arr1[] = new int[5];
        int user;
        
        for(int i=0; i<5; i++) {
            System.out.print("Enter number: ");
            user = scan.nextInt();
            arr1[i] = user;
        }
        scan.close();

        int sum = 0;
        for(int i=0; i<5; i++) {
            sum += arr1[i];
        }
        System.out.println("Sum of all these elements is "+sum);

        System.out.println("/nAll the elements were:");
        // to iterate through each entry of the array.
        for(int var : arr1) {
            System.out.print(var + "  ");
        }
    }
}
