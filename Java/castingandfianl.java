public class castingandfianl {
    public static void main(String[] args){
        /*Casting is of two types - Implicit Casting(done by compiler) 
        and Explicit casting(done by user);
        Implicit casting is only possible when casting from smaller datatypes to larger one;
        In case of larger datatypes to smaller, explicit casting required;
         */

        //Implicit casting;
        float price = 100.00F;
        float finalprice = price + 18;
        System.out.println(finalprice);

        //Explicit casting;
        int price_int = 100;
        int final_int = price_int + (int)18.34; //(int) to do explicit conversion.
        System.out.println(final_int);

        /*
         * In case, to make a constant non-changable-use final
         * It is convention, to represent these constant by capital letter.
         */
        final float PI = 3.14F;
        System.out.println(PI);
    }
}
