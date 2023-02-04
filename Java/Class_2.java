public class Class_2 {
    public static void main(String[] args) {
        Hrms Person1 = new Hrms();
        Person1.setter("Navjot", "2323*898");
        System.out.print("Password of this name is ");
        System.out.println(Person1.getter("Navjot"));
    }
}

class Hrms {
    String username;
    private String password;

    void setter(String user, String password) {
        this.username = user;
        this.password = password;
    }

    String getter(String user) {
        if(user == this.username) {
            return this.password;
        } else {
            return "Invalid Username";
        }
    }
}


