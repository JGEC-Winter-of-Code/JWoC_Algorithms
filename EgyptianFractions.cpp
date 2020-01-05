#include <iostream>

using namespace std;

int main()
{  int numerator,denominator,quotient;
    cout<<"Enter numerator and denominator";
    cout<<"\n";
    cin>> numerator>>denominator;
     while(numerator>denominator)
        numerator=numerator%denominator;
        while(denominator>numerator && numerator>0 && denominator>0)
        {   
            if(numerator==1)
            {
                cout<<"1/"<<denominator;
                 cout<<"\n";
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
                
                cout<<"1/"<<quotient;
                cout<<"\n";
                numerator=numerator*quotient-denominator;
                denominator=denominator*quotient;
            }
        }

    return 0;
}
