
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    char str1[20],str2[10];
    int l,i;
    gets(str1);
    gets(str2);
    l=strlen(str1);
    
    for(i=0;str2[i]!='\0';i++)
    {
    str1[i+l]=str2[i];
        
    }
    str1[i+l]='\0';
    puts(str1);

    return 0;
}
