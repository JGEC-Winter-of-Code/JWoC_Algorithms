import java.util.*;
public class BubbleSorting
{
	public static void main(String[] args) {
	 int indexI,indexJ,arrayLength,temporaryVariable;
	 Scanner sc=new Scanner(System.in);
	 System.out.println("Enter length of array");
	 arrayLength=sc.nextInt();
	 int array[]=new int[arrayLength];
	 System.out.println("Enter elements of array");
	 for(indexI=0;indexI<arrayLength;indexI++)
	 array[indexI]=sc.nextInt();
	 for(indexI=0;indexI<arrayLength-1;indexI++)
	 {
	     for(indexJ=0;indexJ<(arrayLength-indexI-1);indexJ++)
	     {
	         if(array[indexJ]>array[indexJ+1])
	         {
	             temporaryVariable=array[indexJ+1];
	             array[indexJ+1]=array[indexJ];
	             array[indexJ]=temporaryVariable;
	         }
	     }
	 }
	 for(indexI=0;indexI<arrayLength;indexI++)
	 System.out.println(array[indexI]);
	}
}
