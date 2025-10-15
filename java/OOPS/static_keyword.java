import java.util.*;

class Student{
    String name;
    static String school;
}

public class static_keyword{
    public static void main(String args[]){
        Student.school = "kws";

        Student s1 = new Student();
        Student s2 = new Student();

        System.out.println(s1.school);
        System.out.println(s2.school);
    }
}