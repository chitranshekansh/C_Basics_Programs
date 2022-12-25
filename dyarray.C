#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i,sum=0;
int *A;
scanf("%d",&n);
A=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
    scanf("%d",&A[i]);
    sum+=A[i];

}
printf("%d",sum);

    return 0;
}
