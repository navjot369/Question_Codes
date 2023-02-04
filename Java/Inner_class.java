public class Inner_class {
    public static void main(String[] args) {
        Outer obj1 = new Outer();
        Outer.Inner obj2 = obj1.CreateInner();
        obj2.getx();
    }
}

class Outer {
    class Inner {
        int x = 14;
        
        void getx() {
            System.out.println("Value of x is "+x);
        }
    }

    Inner CreateInner() {
        return new Inner();
    }
}
