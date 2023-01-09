//String header file and its functions
#include <stdio.h>
#include <string.h>
int main() {
    char s[20],s2[20],s3[20];
    int l;
    gets(s);
    l=strlen(s);//return the length of string
    puts("Original:");
    puts(s);
    printf("Length:%d\n",l);
    strcpy(s2,s);//copy the string and store it in another variable
    puts("Copied:");
    puts(s2);
    gets(s3);
    strcat(s,s3);//concatinate the strings
    puts("Concatination:");
    puts(s);
    return 0;
}
