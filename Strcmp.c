// Comparing of string according to lexographical order
#include <stdio.h>
#include <string.h>
int main() {
    char s1[20],s2[20];
    int x;
    gets(s1);
    gets(s2);
    x=strcmp(s1,s2);
    if(x==0)
    {
        puts("string is equal");
    }
    else if(x>0)
    {
        puts(s1);
        puts("is greater");
    }
    else
    {
        puts(s2);
        puts("is greater");
    }
    return 0;
}
