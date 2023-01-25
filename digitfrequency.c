#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 char s[1000];
 int i,j;
 int num[10];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%s",s);
    for(i=0;i<10;i++)
    {
        num[i]=0;
    }
    for(i=0;s[i]!='\0';i++)
    {
       if(s[i]==48)
       {
           num[0]++;
       }
       else if(s[i]==49)
       {
           num[1]++;
       }
       else if(s[i]==50)
       {
           num[2]++;
       }
       else if(s[i]==51)
       {
           num[3]++;
       }
       else if(s[i]==52)
       {
           
           num[4]++;
       }
       else if(s[i]==53)
       {
           
           num[5]++;
       }
       else if(s[i]==54)
       {
           
           num[6]++;
       }
       else if(s[i]==55)
       {
           
           num[7]++;
       }
       else if(s[i]==56)
       {
          
           num[8]++;
       }
       else if(s[i]==57)
       {
           
           num[9]++;
       }
       else {
       continue;
       }
       
        
    }
    
    for(j=0;j<=9;j++)
    {
        printf("%d ",num[j]);
    }
    return 0;
}
