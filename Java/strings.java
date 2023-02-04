public class strings{
    public static void main(String[] args){
        //String definition
        String My_name = "Navjot Singh";
        String address = new String("Bathinda");
        System.out.println(My_name);
        System.out.println(address);

        //String concatination
        String name1 = "Jashanjot";
        String name2 = "Singh";
        String name3 = name1 + " " + name2;
        
        //charAt-gives character at particulat index(starting form 0)
        System.out.println(name1.charAt(3));

        //length-gives length of the strings.
        System.out.println(name3.length());

        //replace-replace the old char with new char.
        String name4 = name3.replace("J", "L");
        System.out.println(name4);

        //
    }
}