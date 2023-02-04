import java.util.*;

public class Daysintoyears{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int days_user = scan.nextInt();
        scan.close();

        int years = days_user/365;
        int year_rem = days_user%365;
        int month = year_rem/30;
        int month_rem = year_rem%30;
        int day = month_rem%7;

        System.out.println("Year: " + years);
        System.out.println("Month: " + month);
        System.out.println("Days: " + month_rem);
        System.out.print("Week day: ");
        switch(day){
            case 0:{
                System.out.println("Monday");
                break;}
            case 1:{
                System.out.println("Tueaday");
                break;}
            case 2:{
                System.out.println("Wednesday");
                break;}
            case 3:{
                System.out.println("Thursday");
                break;}
            case 4:{
                System.out.println("Friday");
                break;}
            case 5:{
                System.out.println("Saturday");
                break;}
            case 6:{
                System.out.println("Sunday");
                break;}
        }
    }
}