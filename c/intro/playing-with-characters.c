#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LINE 1000
int main() 
{
    char ch;
    scanf("%c", &ch);
    scanf("\n");

    char line[MAX_LINE];   
    scanf("%s", &line);
    scanf("\n");

    char sentence[MAX_LINE];   
    scanf("%[^\n]%*c", &sentence);
    

    printf("%c\n",ch);
    printf("%s\n",line);
    printf("%s\n",sentence);
    return 0;
}

