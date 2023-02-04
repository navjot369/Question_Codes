//String(char chars[], int startindex, int numschar);

public class String_fun {
    public static void main(String args[]) {
        char arr1[] = {'J', 'A', 'V', 'A', 'S', 'C', 'R', 'I', 'P', 'T'};
        String str1 = new String(arr1, 2, 5);
        System.out.println(str1);

        byte arr2[] = {67, 69, 23, 16};

        String str2 = "Hello " + 68;
        String str3 = "Hello " + (char)68;
        String str4 = "Hello " + (4+9);
        String str5 = new String(arr2);
        String str6 = new String(arr1);

        System.out.println(str2);
        System.out.println(str3);
        System.out.println(str4);
        System.out.println(str5);
        System.out.println(str6);

        // Using String.charAt(index);
        char ch = str6.charAt(6);
        System.out.println("At index 6, in JAVASCRIPT is "+ch); 

        //Using String.length()
        int len_str5 = str5.length();
        System.out.println("Length of str5 is "+len_str5);
        System.out.println("Length of str6 is "+str6.length());

        // String.equals(String) returns true if all the corresponsding char are equal.
        // String.equalsIgnoreCase(String) returns true if all the corresponding char
        // are equal ignoring their case.
        String string1 = "NAVJOT";
        String string2 = "Navjot";
        String string3 = "navjot";
        String string4 = "Singh";
        String string5 = "Amber";

        System.out.println(string1.equals(string2));
        System.out.println(string2.equals(string3));
        System.out.println(string1.equalsIgnoreCase(string3));
        System.out.println(string2.equals(string4));
        System.out.println(string5.equalsIgnoreCase(string1));

    }
}