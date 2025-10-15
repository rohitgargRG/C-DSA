import java.util.*;

// Abstraction

// abstract class
abstract class Animal{
    // abstract method
    abstract void walk();

    // constructor
    public Animal(){
        System.out.println("animal");
    }

    public void eat(){}
}

class Horse extends Animal{
    public void walk(){
        System.out.println("walks on 4 legs");
    }
}

class Chicken extends Animal{
    public void walk(){
        System.out.println("walks on 2 legs");
    }
}


public class Abstraction{
    public static void main(String args[]){
        Horse hrs = new Horse();
        hrs.walk();
        

        // error -> cannot instantiate
        Animal anm = new Animal();
        anm.walk();
    }
}