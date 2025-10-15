import java.util.*;

class Account{
    // public -> accessible from anywhere(within class/child class/diff package)
    public String name;

    // default -> accessible only withtin its package, not from other package.
    int age;

    // protected
    // anyone can access in the current package
    // only child classes can access in the other package
    protected String phone;

    // private
    // accessible only within the class
    private String password;

    // getters and setters
    // used to access/modify private members outside the class

    public String get_password(){
        return password;
    }

    public void set_password(String pass){
        this.password = pass;
    }
}

public class access_modifiers{
    public static void main(String args[]){
        Account obj1 = new Account();
        obj1.name = "rohit";
        obj1.phone = "1234567890";

        //error
        //obj1.password = 21;

        obj1.set_password("rg007");
        obj1.get_password();
    }
}