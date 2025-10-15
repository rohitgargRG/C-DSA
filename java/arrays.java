import java.util.*;

public class arrays{
    // create a function
    public static void fun(int[] arr){
        arr[3] = 100;
        arr[4] = 200;

        for(int i = 0 ; i < arr.length ; i++){
            System.out.print(arr[i] + " ");
        }
    }
    public static void main(String[] args){

        // create an array
        int[] arr = new int[5];

        // by default it will contain 0
        for(int val : arr) System.out.print(val + " ");
        System.out.println();

        // update values
        arr[0] = 10;
        arr[1] = 200;
        arr[2] = 30;

        fun(arr);
        System.out.println();

        for(int val : arr) System.out.print(val + " ");
        System.out.println();

        // Arrays utility class methods

        // sort the array
        Arrays.sort(arr);
        for(int val : arr) System.out.print(val + " ");
        System.out.println();


        // perform binary search
        int idx = Arrays.binarySearch(arr,100);
        System.out.println(idx);

        // copy array
        int[] copy = Arrays.copyOf(arr , arr.length);  // full copy
        int[] partial = Arrays.copyOfRange(arr , 1 , 3);  // copy from idx 1 to 2

        for(int val : copy) System.out.print(val + " ");
        System.out.println();

        for(int val : partial) System.out.print(val + " ");
        System.out.println();

        // compare arrays

        int[] arr1 = {1,2,3};
        int[] arr2 = {1,20,3};

        System.out.println(Arrays.equals(arr1 , arr2));

        // filling and array by a default value
        int[] arr3 = new int[4];
        Arrays.fill(arr3 , 7);
        for(int val : arr3) System.out.print(val + " ");
        System.out.println();
    }
}