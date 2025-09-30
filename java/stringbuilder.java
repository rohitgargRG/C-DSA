import java.util.*;

public class stringbuilder{
    public static void main(String[] args){

        // create a string using stringbuilder
        StringBuilder s =  new StringBuilder("hello");
        System.out.println(s);

        // get a character at a particular index
        char ch = s.charAt(1);
        System.out.println(ch);

        // update a character
        s.setCharAt(1 , 'i');
        System.out.println(s);

        // insert a character at a particular index
        s.insert(2,'d');
        System.out.println(s);

        // delete a character at a particular index
        s.deleteCharAt(2);
        System.out.println(s);

        // append a character/text at end of string
        s.append('R');
        System.out.println(s);

        // size of string
        System.out.println(s.length());

        // reverse a string
        s.reverse();
        System.out.println(s);

        // delete a range
        s.delete(1,4);
        System.out.println(s);
    }
}