import java.util.*;



public class prime{

    static Boolean check_prime(int n){
        if(n == 1 || n == 0){
            return false;
        }
        
        for(int i = 2 ; i*i <= n ; i++){
            if(n%i == 0) return false;
        }

        return true;
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        if(check_prime(n)) System.out.println("prime");
        else System.out.println("not prime");
    }
}