import java.util.*;

// interfaces
interface Animal{
    public void walk();
}

interface Herbivore{

}

// multiple inheritance using interfaces
class Horse implements Animal , Herbivore{
    public void walk(){
        System.out.println("Horse here");
    }
}



public class interfaces{
    public static void main(String args[]){

    }
}