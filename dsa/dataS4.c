#include<stdio.h>

void main()
{
    int row,col, mat[10][10];

    printf("Enter row and column:\n");
    scanf("%d%d",&row,&col);

    for (int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter value at index[%d][%d]",i,j);
            scanf("%d",&mat[i][j]);
        }

    }
    printf("Row= ");
    for()

}