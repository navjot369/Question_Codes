import java.util.Arrays;
/*We need to import this class to do some operations on array;
 * It is convention in java to take letter in title-case;
 */

public class arrays {
    public static void main(String[] args){
        //When you already know the values of array;
        int[] age = new int[4];
        age[0] = 12;
        age[1] = 15;
        age[2] = 45;
        age[3] = 23;
        /*Here int[] means we are making array of integers;
         * age is name of array;
         * new is used as array is non-primitive datatype;
         * int[4] tells there are four entries in array;
         * Afterwards, values are entered using index;
         * Incase, no value defined null value is default for entry;
         * (In case of int , it is zero);
         * Unlike C\C++, it does not allot garbage values to the entries;
         */

         // When you know the entries to be provided;
         String[] name = {"Ram", "Sham", "Veer"};

         //printing array will give some other value;
         //we can print a paticulat value by using indexing;
         System.out.println(age);
         System.out.println(name[2]);

        //Length of array is it's property(not method);
        System.out.println(name.length);

        //Sorting of array, as array is mutable
        Arrays.sort(age);
        Arrays.sort(name);
        System.out.println(age[0]);

        float[] arr1 = new float[2];
        System.out.println(arr1[1]);
        arr1[0] = 3.14F;
        arr1[1] = 4F;

        System.out.println(arr1[1]);

        //2-D array;
        int[][] marks = {{1, 2, 3}, {5, 6, 6}};
        System.out.println(marks[1]);
        System.out.println(marks[1][2]);

        Byte[][] arr2 = new Byte[2][2];
        arr2[0][0] = 2;
        arr2[0][1] = 4;
        arr2[1][0] = 5;
        arr2[1][1] = 6;

        System.out.println(arr2[1][0]);
        
    }
}
