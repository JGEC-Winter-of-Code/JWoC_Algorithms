#include<stdio.h>
int main()
{
  int num,k;
  scanf("%d%d",&num,&k);
  int newnum;
  newnum=num^(1<<k);
  printf("Toggled bits except %d bit : %u",k,newnum);
}
