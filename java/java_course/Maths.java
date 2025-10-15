import java.util.*;

public class Maths{
    public static void main(String args[]){
        int a  = -12;
        int b = 3;
        double c = 13.2;

        // max of two nums
        int maxi = Math.max(a,b);
        System.out.println(maxi);

        // min()
        int mini = Math.min(a,b);
        System.out.println(mini);

        // floor
        double flr = Math.floor(c);
        System.out.println(flr);

        // ceil
        double cl = Math.ceil(c);
        System.out.println(cl);

        // round
        long rnd = Math.round(c);
        System.out.println(rnd);

        // abs 
        int ab = Math.abs(a);
        System.out.println(ab);

        // pow
        double pw = Math.pow(2,3);
        System.out.println(pw);

        // sqrt
        double sqt = Math.sqrt(16);
        System.out.println(sqt);

        // cbrt
        double cbt = Math.cbrt(8);
        System.out.println(cbt);

        // log
        double lg = Math.log(8);
        double lg10 = Math.log10(8);
        System.out.println(lg);
        System.out.println(lg10);


    }
}