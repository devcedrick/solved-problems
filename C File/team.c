#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void answerProblem(int *matrix[], int rows);
bool errorHandling(int *matrix[], int rows);
int sureAnswers(int *matrix[], int rows);
void freeMemory(int *matrix[], int rows);

int main()
{
    int items;
    scanf("%d", &items);

    if(items<1 || items>1000)
    {
        return 1;
    }
    int **matrix;
    matrix=(int**)calloc(items,sizeof(int*));
    for(int i=0;i<items;i++)
    {
        matrix[i]=(int*)calloc(3,sizeof(int));
    }

    answerProblem(matrix,items);

}

void answerProblem(int *matrix[], int rows)
{
    int x=0;
    int rowIndex=0;
    while(x<rows)
    {
        scanf("%d %d %d",&matrix[rowIndex][0], &matrix[rowIndex][1], &matrix[rowIndex][2]);
        rowIndex++;
        x++;
    }
    if(errorHandling(matrix,rows))
    {
        printf("%d",sureAnswers(matrix,rows));
    }
    freeMemory(matrix, rows);
}

bool errorHandling(int *matrix[], int rows)
{
    for(int i=0; i<rows;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(matrix[i][j]>1 || matrix[i][j]<0)
            {
                return false;
            }
        }
    }
    return true;
}

int sureAnswers(int *matrix[], int rows)
{
    int sure=0;

    for(int i=0;i<rows;i++)
    {
        int count=0;
        for(int j=0;j<3;j++)
        {
            if(matrix[i][j]==1)
            {
                count++;
            }
        }
        if(count>1)
        {
            sure++;
        }
    }

    return sure;
}

void freeMemory(int *matrix[],int rows)
{
    for(int i=0; i<rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}