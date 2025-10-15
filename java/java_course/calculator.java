import java.util.*;

public class calculator{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.println("enter num 1 : ");
        int a = sc.nextInt();

        System.out.println("enter num 2 : ");
        int b = sc.nextInt();

        System.out.println("enter operator : ");
        char c = sc.next().charAt(0);

        switch(c){
            case '+':
                System.out.println("addition : " + (a+b));
                break;
            case '-':
                System.out.println("subtraction : " + (a-b));
                break;
            case '*':
                System.out.println("multiplication : " + (a*b));
                break;
            case '/':
                System.out.println("division : " + (a/b));
                break;
            default:
                System.out.println("invalid");
        }
    }
}