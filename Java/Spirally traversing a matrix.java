import java.io.*; 
  
class GFG { 
    static void printSpiral(int m, int n, int a[][]) 
    { 
        int i, k = 0, l = 0; 
  
        while (k < m && l < n) { 
            for (i = l; i < n; ++i) { 
                System.out.print(a[k][i] + " "); 
            } 
            k++; 
            for (i = k; i < m; ++i) { 
                System.out.print(a[i][n - 1] + " "); 
            } 
            n--; 
            if (k < m) { 
                for (i = n - 1; i >= l; --i) { 
                    System.out.print(a[m - 1][i] + " "); 
                } 
                m--; 
            }  
            if (l < n) { 
                for (i = m - 1; i >= k; --i) { 
                    System.out.print(a[i][l] + " "); 
                } 
                l++; 
            } 
        } 
    } 
    public static void main(String[] args) 
    { 
        int R = 3; 
        int C = 6; 
        int a[][] = { { 1, 2, 3, 4, 5, 6 }, 
                      { 7, 8, 9, 10, 11, 12 }, 
                      { 13, 14, 15, 16, 17, 18 } }; 
        printSpiral(R, C, a); 
    } 
} 
