import java.util.Scanner;
// Other imports go here// Do NOT change the class name
class Main
{
    public static void main(String[] args)
    {
      Scanner scan = new Scanner(System.in);
      int n=scan.nextInt();
      for(int i=0;i<n;i++){
        int num=scan.nextInt();
        int sq=num*num;
        int tmp=sq,c=0;
        //digit count
        while(tmp>0){
          c++;tmp/=10;
        }
        int x=c-c/2;
        int y=c-x;
        x=(int)Math.pow(10,x);
        y=(int)Math.pow(10,y);
        int t1,t2;
        t1=sq/x;
        t2=sq%x;
        //System.out.println(t1+" "+t2);
        if((t1+t2)==num)
          System.out.println(1);
        else{
          t1=sq/y;
          t2=sq%y;
          //System.out.println(t1+" "+t2);
          if((t1+t2)==num)
          	System.out.println(1);
          else
            System.out.println(0);
        }
      }
    }
}