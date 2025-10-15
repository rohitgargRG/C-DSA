import java.util.*;

public class Heaps{
    public static void main(String[] args){

        // create a priority queue
        // by default it is min Heap
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        int[] arr = {10,20,30,11,22,4,5,6};

        // add elements into heap
        // add() --> TC = O(logn)
        // remove() --> TC = O(logn)
        // peek() --> Tc = O(1)

        // Tc = nlogn
        for(Integer val : arr){
            pq.add(val);
        }

        // print heap
        while(pq.size() > 0){
            System.out.println(pq.peek());
            pq.remove();
        }

        System.out.println("------------------------");

        // max Heap
        PriorityQueue<Integer> pq1 = new PriorityQueue<>(Collections.reverseOrder());

        for(Integer val : arr){
            pq1.add(val);
        }

        // print heap
        while(pq1.size() > 0){
            System.out.println(pq1.peek());
            pq1.remove();
        }
    }
}