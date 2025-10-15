import java.util.*;

// create a class
class Pen{

    // variables
    String color;
    String type;

    // method
    public void write(){
        System.out.println("writing something with pen of color --> " + color + " and type --> " + type);
    }

    public void printColor(){
        System.out.println(this.color);
    }
}

class Student{
    String name;
    int age;

    // non-parameterised constructor
    Student(){
        System.out.println("constructor called");
    }

    // parameterised constructor
    Student(String name , int age){
        this.name = name;
        this.age = age;
    }

    // copy constructor
    // copies information of one object into other object
    Student(Student s2){
        this.name = s2.name;
        this.age = s2.age;
    }

    public void info(){
        System.out.println("name : " + name + " , age : " + age);
    }
}

public class one{
    public static void main(String[] args){

        // // create an object of a class
        // Pen obj1 = new Pen();

        // // set data members values using this object
        // obj1.color = "blue";
        // obj1.type = "gel";

        // // call the class method using this object
        // obj1.write();
        // obj1.printColor();

        // // create another object
        // Pen pen2 = new Pen();
        // pen2.color = "black";
        // pen2.type = "ball";

        // pen2.write();
        // pen2.printColor();

        Student s1 = new Student();
        s1.name = "Rohit";
        s1.age = 22;

        Student s2 = new Student("cr7" , 7);

        Student s3 = new Student(s1);

        s1.info();
        s2.info();
        s3.info();
    }
}