import java.util.*;

public class transpose{
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

        System.out.println("transpose of matrix is : ");

        for(int i = 0; i < row ; i++){
            for(int j = i+1; j < arr[i].length ; j++){
               
                if(i == j) continue;
                
                // swap
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
                
            }
        }

        for(int i = 0; i < row ; i++){
            for(int j = 0; j < arr[i].length ; j++){
               System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

       
        
    }
}