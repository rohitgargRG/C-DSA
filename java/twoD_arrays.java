import java.util.*;

public class twoD_arrays{
    public static void main(String[] args){
        
        // rectangular array
        int[][] arr = new int[2][3];
        arr[0][0] = 11;
        arr[0][1] = 12;
        arr[0][2] = 13;
        arr[1][0] = 21;
        arr[1][1] = 22;
        arr[1][2] = 23;

        // jagged array
        int[][] arr1 = new int[2][];
        arr1[0] = new int[3];
        arr1[1] = new int[4];
        arr1[0][0] = 11;
        arr1[0][1] = 12;
        arr1[0][2] = 13;
        arr1[1][0] = 21;
        arr1[1][1] = 22;
        arr1[1][2] = 23;
        arr1[1][3] = 24;


        // print array
        /*

        for(int i = 0; i < arr.length ; i++){
            for(int j = 0; j < arr[i].length; j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

        */


        for(int i = 0; i < arr1.length ; i++){
            for(int j = 0; j < arr1[i].length; j++){
                System.out.print(arr1[i][j] + " ");
            }
            System.out.println();
        }
    }
}