import java.util.*;

public class sum_of_odd{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int sumi = 0;

        for(int i = 1 ; i <= n; i++){
            if(i%2 != 0) sumi += i;
        }

        System.out.println("sum of odd nums : " + sumi);
    }
}
