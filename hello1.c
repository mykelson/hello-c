#include <stdio.h>

int main (void){
    printf("what is your name: \n");
    char* name;
    scanf("%[^\n]s", name);
    if (name == NULL)
    {
        printf("no string");
    }
    else
    {
        printf("hello, %s", name);
    }    
}

