#include<stdio.h>
void TowerOfHanoi(int size, char c1, char c2, char c3)
{
    if(size==1)
    {
        printf("%d  Disc  transferred from %c to %c \n", size, c1, c3);
    }
    else{
        TowerOfHanoi(size-1,c1,c3,c2);
        printf("%d Transfer Disc From %c TO %c\n",size,c1,c3);
        TowerOfHanoi(size-1,c2,c1,c3);
    }
}
void main()
{
    TowerOfHanoi(3,'s','m','d');
}
