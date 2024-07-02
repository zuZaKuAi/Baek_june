#include <stdio.h>

int main(void)
{
    int x,y,z,i;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d %d",&y,&z);
        printf("%d\n",z+y);
    }
    return 0;
    
}