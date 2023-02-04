public class exit_use{
    public static void main(String args[]){
        int a = 13;
        if(a>10){
            System.out.println("a is greater than 10");
            System.exit(0);
        }else{
            System.out.println("a is less than 10");
        }
        System.out.println("This is the last line of code.");
    }
    
}
