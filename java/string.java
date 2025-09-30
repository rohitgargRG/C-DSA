import java.util.*;

public class string{
    public static void main(String[] args){

        // declare a string
        String s = "hello";
        System.out.println(s);

        // take input
        Scanner sc = new Scanner(System.in);

        String s1 = sc.nextLine();
        System.out.println(s1);

        // length of string
        int len = s.length();  // NOTE - length() is a function here
        System.out.println(len);

        // get the character at a particular index
        char ch = s.charAt(2);  // not s[2] --> error
        System.out.println(ch);

        // print all characters
        for(int i = 0; i < s.length() ; i++){
            char c = s.charAt(i);
            System.out.print(c + " ");
        }
        System.out.println();

        // substring() method

        // s.substring(i,j)  --> gives substring from index i to j-1.
        // s.substring(i)  --> gives substring from index i till last index.

        String s2 = "HelloRohitGarg";

        System.out.println(s2.substring(1,4));
        System.out.println(s2.substring(1));
        System.out.println(s2.substring(1,1));  // --> prints blank " "
        // System.out.println(s2.substring(2,1));  // --> error

        // print all substrings of a given string

        for(int i = 0; i < s.length() ; i++){
            for(int j = i+1; j <= s.length() ; j++){
                System.out.println(s.substring(i,j));
            }
        }

        // adding two strings
        String s3 = "hello";
        String s4 = "world";

        String s5 = s3 + " " + s4;
        System.out.println(s5);

        // add characters to string

        s3 += ' ';
        s3 += 'R';
        System.out.println(s3);

        // we can also add integers to string

        s3 += 10;
        System.out.println(s3);

        // go from left to right
        System.out.println("hello" + 10 + 20); // --> hello1020
        System.out.println(10 + "hello" + 20);  // --> 10hello20
        System.out.println(10 + 20 + "hello");  // --> 30hello

        // split()
        String temp = "abc def geh";
        String[] parts = temp.split(" ");

        String temp1 = "abc , def , geh";
        String[] parts1 = temp.split(",");

        for(String i : parts1) System.out.println(i);
        System.out.println();
    }
}