
import java.io.*;

public class maxoccurence 
{
        public static void main(String args[])throws IOException
        {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("Enter any word : ");  /*asking user to enter input*/
            String str=in.readLine();
            str=str.toLowerCase();
            int g=0,count,max=0;;
            int ar[]=new int[26];
            char ch[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
                for(int i=0;i<ch.length;i++)
                {
                    count=0;
                    for(int j=0;j<str.length();j++)
                     {
                        char ch1=str.charAt(j);
                        if(ch[i]==ch1)
                            count++;
                     }
                   ar[i]=(int) count;
                }
                max=ar[0];
                for(int j=1;j<26;j++) /*loop to check occurence of all alphabet*/
                {
                    if(max<ar[j])   /*if alphabet a[j]has count greater than max than it get replaced*/
                        {
                            max=ar[j];
                            g=j;
                        }
                }
                System.out.println("Maximum Occurence is "+max+" of character "+ch[g]);
           } 
}