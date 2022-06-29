//printing all escape sequence

#include<stdio.h>

int main(void){
    char myChar = '\n';
    printf("Nayem%c", myChar);

    myChar = '\r';
    printf("%c\nNayem",myChar);

    myChar = '\b';
    printf("Nayem%c\n",myChar);

    myChar = '\f';
    printf("Nayem%c\n",myChar);

    myChar = '\t';
    printf("%cNayem\n",myChar);

    myChar = '\v';
    printf("%c\nNayem",myChar);

    myChar = '\a';
    printf("%c\n",myChar);


    myChar = '\?';
    printf("%c\n",myChar);

     myChar = '\"';
    printf("%c\n",myChar);

     myChar = '\'';
    printf("%c\n",myChar);

     myChar = '\\';
    printf("%c\n",myChar);

    return 0;
}
