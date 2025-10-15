import java.util.*;

public class twoD_arrays{
    public static void print_arr(int[][] arr){
        int row = arr.length;
        // int col = arr[0].length;

        for(int i = 0; i < row; i++){
            for(int j= 0; j < arr[i].length ; j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);

        // create twoD array
        int[][] arr = new int[2][3];

        // take input
        for(int i = 0 ; i< 2; i++){
            for(int j = 0; j < 3; j++){
                arr[i][j] = sc.nextInt();
            }
        }

        print_arr(arr);

    }
}