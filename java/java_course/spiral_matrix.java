import java.util.*;

public class spiral_matrix{
    public static void main(String args[]){
        // take matrix input
        Scanner sc = new Scanner(System.in);

        int row = sc.nextInt();
        int col = sc.nextInt();
        int[][] arr = new int[row][col];

        for(int i = 0; i < row;  i++){
            for(int j = 0; j < col ; j++){
                arr[i][j] = sc.nextInt();
            }
        }

        System.out.println("spiral matrix is : ");

        // take 4 ptrs
        int row_start = 0;
        int row_end = row-1;
        int col_start = 0;
        int col_end = col-1;

        // start looping
        while(row_start <= row_end && col_start <= col_end){
            
            // 4 cases

            // case 1 - col_start -> col_end
            for(int colm = col_start ; colm <= col_end ; colm++){
                System.out.print(arr[row_start][colm] + " ");
            }

            row_start++;

            // case 2 - row_start -> row_end (last col)
            for(int rw = row_start ; rw <= row_end ; rw++){
                System.out.print(arr[rw][col_end] + " ");
            }

            col_end--;

            // case 3 - col_end -> col_start (last row)
            for(int cl = col_end ; cl >= col_start; cl--){
                System.out.print(arr[row_end][cl] + " ");
            }

            row_end--;

            // case 4 - row_end -> row_start
            for(int rw = row_end ; rw >= row_start ; rw--){
                System.out.print(arr[rw][col_start] + " ");
            }
            col_start++;

            // System.out.println();
        }
    }
}