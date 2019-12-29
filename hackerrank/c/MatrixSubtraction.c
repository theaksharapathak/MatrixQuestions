#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **matAptr,**matBptr,i,j,row,col,**subtract;

    printf("enter the order of the matrix\n");
    scanf("%d %d",&row,&col);

    matAptr=(int **)malloc(row*sizeof(int *));
    matBptr=(int **)malloc(row*sizeof(int *));
    subtract=(int **)malloc(row*sizeof(int *));

    for(i=0;i<row;i++){
        matAptr[i]=(int *)malloc(col*sizeof(int));
        matBptr[i]=(int *)malloc(col*sizeof(int));
        subtract[i]=(int *)malloc(col*sizeof(int));
    }
    
    printf("enter the elements of the first matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",(*(matAptr+i)+j));
        }
    }

    printf("enter the elements of the second matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",(*(matBptr+i)+j));
        }
    }

    // Storing the result of MatAptr-MatBptr in subtract Matrix
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
           // **subtract = *(*(matAptr+i)+j) - *(*(matBptr+i)+j) ;
            subtract[i][j] = *(*(matAptr+i)+j) - *(*(matBptr+i)+j) ;

        }
    }

    printf("on subtracting:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
           // printf("%d\t",**subtract);
           printf("%d\t", subtract[i][j]);
        }
        printf("\n");
    }
    return 0 ;

}