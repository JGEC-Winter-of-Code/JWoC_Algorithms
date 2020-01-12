#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
int main()
{
    int n;
    scanf("%d",&n);
    int tmp=n;
    int arr[100],c=0;
    while(tmp>0)
    {
        arr[c]=tmp&1;
        c++;
        tmp=tmp>>1;
    }
    
    for(int i=0;i<=c/2;i++)
    {
        if((arr[i]&1)==(arr[i+2]&1))
            continue;
        else
        {
            printf("No alternate pattern");
            exit(0);
        }
    }
    printf("Yes pattern exits");
}
