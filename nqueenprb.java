//n queen problem using backtracking
import java.util.*;
public class nqueenprb 
{
    int N;
    void printSolution(int board[][]) 

    { 
        for (int i = 0; i < N; i++) { 
            for (int j = 0; j < N; j++) 

                System.out.print(" " + board[i][j] + " "); 
            System.out.println(); 
        } 
    } 
    boolean isSafe(int board[][], int r, int c) 

    { 
        int i, j; 
        for (i = 0; i < c; i++) 

            if (board[r][i] == 1) 

                return false; 
        for (i = r, j = c; i >= 0 && j >= 0; i--, j--) 

            if (board[i][j] == 1) 

                return false; 
        for (i = r, j = c; j >= 0 && i < N; i++, j--) 

            if (board[i][j] == 1) 

                return false; 
        return true; 
    } 
    boolean solveNQUtil(int board[][], int col) 

    { 
        if (col >= N) 

            return true; 
        for (int i = 0; i < N; i++)
        { 
            if (isSafe(board, i, col)) 
            { 
                board[i][col] = 1; 
                if (solveNQUtil(board, col + 1) == true) 

                    return true; 
                board[i][col] = 0;
            } 
        } 
        return false; 
    } 
    boolean solveNQ() 

    { 
        int i,j;
        int board[][]=new int[N][N];
        for(i=0;i<N;i++)
         for(j=0;j<N;j++)
         board[i][j]=0;
        if (solveNQUtil(board, 0) == false)
        { 
            System.out.print("Solution does not exist"); 
            return false; 
        } 
        printSolution(board); 
        return true; 
    } 
    public void main() 
    { 
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the value of N:");
        N=sc.nextInt();
        solveNQ(); 
    } 
} 