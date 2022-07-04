#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    char c; 
    scanf("%c",&c);
    printf("%c\n", c);
    
    char s[100];
    scanf("%s", s);
    // scanf("%[^\n]%*c", s);

    printf("%s\n", s);
    
    getchar();
    char sen[100];
    scanf("%[^\n]%*c", sen);
    printf("%s\n", sen);


    return 0;
}