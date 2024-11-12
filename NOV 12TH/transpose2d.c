#include <stdio.h>
int main(){
    int r, c;
    printf("Enter number of rows and columns:  ");
    scanf("%d %d", &r, &c);
    int mat[r][c];  
    int transpose[c][r];
    printf("Enter the elements of the matrix:  ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            transpose[j][i]=mat[i][j]; 
        }
    }
    printf("Transposed matrix:  ");
    for(int i=0;i<c;i++)
    {
        for (int j=0;j<r;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}
