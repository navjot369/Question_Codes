public class Classes_1 {
    public static void main(String args[]) {
        Dog d1 = new Dog("Kuta", 45);

        d1.getinfo();

        Dog d2 = new Dog(d1);
        d2.getinfo();

        Pitbull P1 = new Pitbull("Bully", 150);
        P1.getinfo();
    }
}

class Dog {
    String name;
    int age;

    public void getinfo() {
        System.out.println("Name of dog is" + this.name);
        System.out.println("Age of dog is" + this.age);
    }

    Dog(String name, int age){
        this.name = name;
        this.age = age;
        System.out.println("Constructor is called.");
    }

    Dog(Dog d) { 
        this.name = d.name;
        this.age = d.age;
    }

    Dog(){
    }
}

class Pitbull extends Dog {

    static int age = 10;
    int saal;

    Pitbull(String name, int saal) {
        this.name = name;
        this.saal = saal;
    }

}