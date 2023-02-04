//import java.util.Arrays;

public class Operators {
    public static void main(String[] args){
        //Operators
        int a = 3, b = 2;
        int mod = a%2;
        System.out.println(mod);
        /*
         * Uninary operators - 
         * a++ = post-increament
         * ++a = pre-increament
         * a-- = post-decreament
         * --a = pre-decreament
         */
        
        System.out.println(a--);
        System.out.println(a);
        System.out.println(b);
        System.out.println(b++);

        //Math class
        System.out.println(Math.min(5, 6));
        System.out.println((int)(Math.random()*1000));
        //random gives a value less than one , multiple it and convert it to int.
    }
    
}
