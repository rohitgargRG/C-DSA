import java.util.*;

public class Arrays_c{
    static void print_arr(int[] arr){
        for(int val : arr) System.out.print(val + " ");
        System.out.println();
    }
    static void print_arr(String[] arr){
        for(String val : arr) System.out.print(val + " ");
        System.out.println();
    }
    public static void main(String args[]){
        // create an array
        int[] arr = new int[5];
        int[] arr2 = {10,20,40};

        // by default it contains 0

        // to intialise with some value
        Arrays.fill(arr , 10);
        print_arr(arr);

        // size of array
        System.out.println("size : " + arr.length);

        // update values
        arr[0] = 12;
        arr[1] = 22;
        arr[2] = 3;

        print_arr(arr);

        // utility class methods

        // sort()
        Arrays.sort(arr);
        print_arr(arr);

        // binary search
        int idx = Arrays.binarySearch(arr,10);
        System.out.println(idx);

        // copy the array into another array
        int[] copy = Arrays.copyOf(arr,arr.length); // full copy
        int[] partial = Arrays.copyOfRange(arr,1,4); // copies from idx 1 to 3

        print_arr(copy);
        print_arr(partial); 

        // compare arrays
        System.out.println(Arrays.equals(copy,partial));
        System.out.println(copy == partial);

        // take array as input
        System.out.println("taking array as input : ");
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        String[] arr3 = new String[size];

        for(int i = 0; i < size ; i++){
            arr3[i] = sc.next();
        }

        print_arr(arr3);

        int maximum = integer.MIN_VALUE;
        int minimum = integer.MAX_VALUE;
    }
}