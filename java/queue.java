import java.util.*;

public class queue{
    public static void main(String[] args){

        // use ArrayDequeu
        ArrayDeque<Integer> deq = new ArrayDeque<>();

        // add element at end
        deq.add(10);
        deq.addLast(20);

        // add element at first
        deq.push(1);
        deq.addFirst(5);

        // get the first element
        System.out.println(deq.getFirst());

        // get the last element
        System.out.println(deq.getLast());

        // remove element from first
        deq.remove();
        deq.removeFirst();
        deq.pop();

        // remove element from last
        deq.removeLast();

        //size of dq
        System.out.println(deq.size());

    }
}