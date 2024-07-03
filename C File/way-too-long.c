#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define  MAX_WORD_LENGTH 100

void wordInput(int x);
void wordAbbrev(int x, char *w[x]);
bool errorHandling(char *w[], int i);
void freeMemory(char *w[], int x);

int main()
{
    int numOfWord;
    scanf("%d", &numOfWord);

    wordInput(numOfWord);
}

void wordInput(int x)
{
    int i=0;
    char *words[x];
    for(int i=0; i<x; i++)
    {
        words[i]=(char*)malloc((MAX_WORD_LENGTH+1)*sizeof(char));
        scanf("%s",words[i]);
    }
    //function to abbreviate words with more than 10 letters
    wordAbbrev(x,words);
    freeMemory(words,x);
}

void wordAbbrev(int x, char *w[])
{
    for(int i=0; i<x; i++)
    {
        if(errorHandling(w,i))
        {
            int wordLen=strlen(w[i]);
            if(wordLen>10)
            {
                printf("%c%d%c\n", w[i][0], wordLen-2, w[i][wordLen-1]);
            }
            else
            {
                printf("%s\n", w[i]);
            }
        }
    }
}

bool errorHandling(char *w[], int i)
{
    if(w[i]==NULL)
    {
        return false;
    }
    return true;
}

void freeMemory(char *w[], int x)
{
    for(int i=0; i<x; i++)
    {
        free(w[i]);
    }
}