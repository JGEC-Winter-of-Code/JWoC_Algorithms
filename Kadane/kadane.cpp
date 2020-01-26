//MAXIMUM SUM OF SUBARRAY(CONTIGUOUS SUBSEQUENCE) KADANE'S ALGO

#include <bits/stdc++.h>

using namespace std;

int kadmax(int arr[], int size)
{    
    int finalMax = INT_MIN, currentMax = 0; //INT_MIN = MOST NEGATIVE INTEGER
    
    for(int i = 0; i < size; i++)
    {
        //Iterate over Array adding each element to current max
        currentMax = currentMax + arr[i];
        
        //finalMax updated when less than currentMax
        if(finalMax < currentMax)
            finalMax = currentMax;
        
        //If currentMax becomes negative it is reassigned value 0
        if(currentMax < 0)
            currentMax = 0;
    }
    
    return finalMax;
}

int main()
{
    int len, ans;
    
    cout << "Enter length of Array : ";
    
    cin >> len;
    
    int ar[len];
    
    cout<<"Enter elements of Array\n";
    
    for(int i = 0; i < len; i++) //Array Input
        cin >> ar[i];
    
    ans = kadmax(ar, len); //Function calling
    
    cout<<ans<<endl;
}
