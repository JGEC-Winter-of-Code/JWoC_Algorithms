import java.util.*;

public class LeftShiftArray
{
	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		
        int n=scan.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
            a[i]=scan.nextInt();
        
        int m=scan.nextInt();
        int tmp[]=new int[m];
        for(int i=0;i<m;i++)
            tmp[i]=a[i];
        
        int j=0;
        for(int i=0;i<n;i++){
            if((i+m)>=n){
                a[i]=tmp[j];
                j++;
            } 
            else
                a[i]=a[i+m];
        }
        for(int i=0;i<n;i++)
            System.out.print(a[i]+" ");
        scan.close();
	}
}
