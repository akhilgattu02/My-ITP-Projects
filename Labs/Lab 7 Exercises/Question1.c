#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int n_cross_n_matrix[100][100];
    int *vector=calloc(num,4);
    for (int i = 0; i < num; i++)
    {

        for (int j = 0; j < num; j++)
        {
            printf("Enter matrix coordinate(%d),(%d): ",i+1, j+1);
            scanf("%d", &n_cross_n_matrix[i][j]);
        }
    }
    printf("Your matrix is:\n");
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("%d ", n_cross_n_matrix[i][j]);
        }
        printf("\n");
    }
    printf("Enter vector coordinates:\n");
    for(int i=0;i<num;i++)
    {
    printf("Your vector coordinte(%d): ",i);
    scanf("%d",&vector[i]);
    }
    printf("\n");
    printf("Your vector is:\n");
    for(int i=0;i<num;i++)
    {
        printf("%d\n",vector[i]);
    }
    int sum=0;
    int *vector_sum=calloc(num,4);
    for(int i=0;i<num;i++)
    {
    for(int j=0;j<num;j++)
    {
       sum = sum + (n_cross_n_matrix[i][j]*vector[j]);
    }
    vector_sum[i]=sum;
    sum=0;
    }
    printf("Vector sum is:\n");
    for(int i=0;i<num;i++)
    {
       printf("%d\n",vector_sum[i]);
    }
    return EXIT_SUCCESS;
}