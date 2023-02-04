public class try_catch {
    public static void main(String[] args){
        int[] arr1 = {1, 5, 9};
        try{
            System.out.println(arr1[4]);
        } catch(Exception exception){
            System.out.println("IndexError: Index out of range");
            //This will happen in case of any exception in try block.
        }

        System.out.println("My name is Navjot Singh.");
    }
    
}
