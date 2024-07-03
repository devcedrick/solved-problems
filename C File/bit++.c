#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 3

int statementBody(int x);
int  stringComparison(char *operations[], int index);

int main()
{
    int statements;
    scanf("%d", &statements);

    printf("%d", statementBody(statements));
}

int statementBody(int x) // x = # of statements to execute
{
    char *operations[x];
    int result=0;
    for(int i=0; i<x; i++)
    {
        operations[i]=(char*)calloc(MAX_WORD_LENGTH,sizeof(char));
        scanf("%s",operations[i]);
        result = result+stringComparison(operations, i);
    }

    for(int i=0;i<x;i++)
    {
        free(operations[i]);
    }
    return result;
}

int  stringComparison(char *operations[], int index)
{
    if(strcmp("X++", operations[index])==0 || strcmp("++X", operations[index])==0)
    {
        return 1;
    }
    else if(strcmp("--X", operations[index])==0 || strcmp("X--", operations[index])==0)
    {
        return -1;
    }
    return 0;
}

