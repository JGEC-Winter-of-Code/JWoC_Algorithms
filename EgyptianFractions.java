import java.util.*;
class EgyptianFractions
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int numerator,denominator,quotient;
        System.out.println("Enter numerator and denominator ");
        numerator=sc.nextInt();
        denominator=sc.nextInt();
        while(numerator>denominator)
        numerator=numerator%denominator;
        while(denominator>numerator && numerator>0 && denominator>0)
        {   
            if(numerator==1)
            {
                System.out.println("1/"+denominator);
                break;
            }
            else if(denominator==1)
             break;
            else 
            {
                if(denominator%numerator==0)
                 quotient=denominator/numerator;
                else
                 quotient=denominator/numerator+1;
                
                System.out.println("1/"+quotient);
                numerator=numerator*quotient-denominator;
                denominator=denominator*quotient;
            }
        }
    }
}
