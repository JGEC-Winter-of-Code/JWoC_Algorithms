#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[100],tmp[100];
    scanf("%[^\n]",str);
    int n=strlen(str);
    for(int i=0;i<=26;i++)
        tmp[i]=0;
    for(int i=0;i<n;i++) {
        if(isalpha(str[i])){
            if(islower(str[i]))
                tmp[str[i]-97]++;
            else
                tmp[str[i]-65]++;
        }
    }
    int b=tmp[0],p;
    for(int i=0;i<=26;i++) {
        if(b<tmp[i]){
            b=tmp[i];
            p=i;
        }
    }
    printf("'%c' appers %d number of times",p+97,tmp[p]);
}
