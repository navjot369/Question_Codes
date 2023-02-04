import java.util.Scanner;

public class Class_3 {
    public static void main(String[] args) {
        int user;
        System.out.print("Enter the radius: ");
        Scanner scan = new Scanner(System.in);
        user = scan.nextInt();
        Circle c1 = new Circle(user);
        Circle c2 = new Circle();
        System.out.println(c1.area());
        System.out.println(c2.area());
        scan.close();
        circle12();

        /* instanceof returns true if object is instance of that particular 
         * class. This is user in following sense -> obj instanceof class;
         */
        System.out.println(c1 instanceof Circle);
    }
    
    public static void circle12() {
        Circle c3 = new Circle(12);
        System.out.println("Area of cirlce with radius 12 is "+c3.area());

    }
}

class Circle {
    private double radius;

    Circle() {
        this(10);
    }
    Circle(double radius) {
        this.radius = radius;
    }

    public double area() {
        return 3.14*this.radius*this.radius;
    }
}