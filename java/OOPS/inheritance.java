import java.util.*;

class Shape{
    String color;

    public void area(){
        System.out.println("area fn of shape class");
    }
}

// single inheritance
class Triangle extends Shape{
    int l,b;

    Triangle(String c , int l , int b){
        this.color = c;
        this.l = l;
        this.b = b;
    }

    public void printDetails(){
        System.out.println("color is : " + this.color + " , length : " + this.l + " , breadth : " + this.b);
    }

    public void area(int l,int b){
        System.out.println((1/2) * l * b);
    }
}

// multilevel inheritance
// class EquilateralTriangle extends Triangle{
    
//     EquilateralTriangle(){

//     }

//     public void area(int x){
//         System.out.println((1/2) * x * x);
//     }
// }

// heirarchial inheritance
// shape class being inherited by both Ttiangle and Shape
class Circle extends Shape{
    public void area(int r){
        System.out.println(3.14 * r * r);
    }
}

public class inheritance{
    public static void main(String args[]){
        Triangle t1 = new Triangle("blue" , 2 , 4);
        t1.printDetails();
    }
}