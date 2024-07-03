#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char *word = (char*)malloc(101 * sizeof(char));
    scanf("%100s", word);

    int upper = 0, lower = 0;
    for (int i = 0; word[i]; i++)
    {
        if (isupper(word[i]))
        {
            upper++;
        }
        else if (islower(word[i]))
        {
            lower++;
        }
    }

    for (int i = 0; word[i]; i++)
    {
        if (lower >= upper)
        {
            word[i] = tolower(word[i]);
        }
        else
        {
            word[i] = toupper(word[i]);
        }
    }

    printf("%s", word);
    free(word);
    return 0;
}
