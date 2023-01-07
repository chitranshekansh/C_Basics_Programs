// 1 to 10 table
#include <stdio.h>

void main() {
    int i,j,k;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
        
            printf("%dx%d=%d\n",i,j,i*j);
        }
        printf("\n");
    }
    
}
