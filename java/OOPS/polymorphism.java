import java.util.*;

// student class
class Student{
    String name;
    int age , roll;

    // constructor
    Student(String name , int age , int roll){
        this.name = name;
        this.age = age;
        this.roll = roll;
    }

    // function overloading
    public void printInfo(String name){
        System.out.println(name);
    }

    public void printInfo(int age){
        System.out.println(age);
    }

    public void printInfo(String name , int age){
        System.out.println(name + " : " + roll);
    }
}



public class polymorphism{
    public static void main(String args[]){
        Student s1 = new Student("rohit" , 22 , 47);

        s1.printInfo("rohit");
        s1.printInfo("rohit" , 47);
    }
}