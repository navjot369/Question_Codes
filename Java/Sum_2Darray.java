import java.util.Scanner;

public class Sum_2Darray {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter number of rows: ");
        int row = scan.nextInt();
        System.out.print("Enter number of columns: ");
        int col = scan.nextInt();
        int user;

        int arr1[][] = new int[row][col];
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                System.out.print("Enter number(R-"+(i+1)+" C-"+(j+1)+"): ");
                user = scan.nextInt();
                arr1[i][j] = user;
            }
        }
        scan.close();

        int sum = 0;
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                sum += arr1[i][j];
            }
        }
        System.out.println("Sum of all these numbers are "+sum);     
        
        System.out.println("\nDisplay in term of matrix: ");
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                System.out.print(arr1[i][j]+"   ");
            }
            System.out.println();
        }
    }
    
}
