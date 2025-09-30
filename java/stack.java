import java.util.*;

public class stack{
    public static void main(String[] args){

        // create a stack
        Stack<Integer> st = new Stack<>();

        // push
        st.push(10);
        st.push(20);
        st.push(30);

        // get the top/peek element
        System.out.println(st.peek());

        // pop the element 
        // NOTE - here pop() returns the popped element
        System.out.println(st.pop());

        // check if stack is empty or not
        System.out.println(st.isEmpty());

        // find size of stack
        System.out.println(st.size());

        // search position of an elemnt in stack -> 1 based index from top
        int idx = st.search(20);
        System.out.println(idx);
    }
}