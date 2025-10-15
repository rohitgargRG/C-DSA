// class or blueprint
class Pen_class{
    String color;
    String type;

    // methods
    public void write(){
        System.out.println("Writing something with " + type + " pen of color :  "+ color);
    }

    public void printColor(){
        System.out.println(this.color);
    }
}

class Student{
    String name;
    int age;
    int roll;

    // non-parameterised constructor
    Student(){
        System.out.println("construtor called");
    }

    // parameterised constructor
    Student(String name , int age , int roll){
        this.name = name;
        this.age = age;
        this.roll = roll;
    }

    // copy constructor
    Student(Student s){
        this.name = s.name;
        this.age = s.age;
        this.roll = s.roll;
    }

    public void printInfo(){
        System.out.println(this.name);
        System.out.println(this.age);
        System.out.println(this.roll);
    }
}

public class Pen{
    public static void main(String args[]){

        // create object
        Pen_class pen1 = new Pen_class();
        pen1.color = "blue";
        pen1.type = "ball";

        pen1.write();

        Pen_class pen2 = new Pen_class();
        pen2.color = "black";
        pen2.type = "gel";

        pen2.write();
        pen2.printColor();

        // Student class
        System.out.println("--------- working with student class ------------");

        Student s1 = new Student();
        s1.name = "rohit";
        s1.age = 22;
        s1.roll = 47;

        s1.printInfo();

        // parameterised constructor
        Student s2 = new Student("sanchit" , 12 , 50);
        s2.printInfo();

        // copy constructor
        Student s3 = new Student(s2);
        s3.printInfo();
    }
}