#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **matAptr,**matBptr,row,col,i,j,**sum;

    printf("enter the order of the first matrix\n");
    scanf("%d %d",&row,&col);

    matAptr=(int **)malloc(row*sizeof(int *));
    matBptr=(int **)malloc(row*sizeof(int *));
    sum=(int **)malloc(row*sizeof(int *));

    for(i=0;i<row;i++){
        matAptr[i]=(int *)malloc(col*sizeof(int));
        matBptr[i]=(int *)malloc(col*sizeof(int));
        sum[i]=(int *)malloc(col*sizeof(int));
    }
    
    printf("enter the elements of the first matrix\n");
    
    for(i=0;i<row;i++){  
        for(j=0;j<col;j++){    
            scanf("%d",(*(matAptr+i)+j));
        }
    }

    printf("the elements of the first matrix are:\n");

    for(i=0;i<row;i++){    
        for(j=0;j<col;j++){     
            printf("%d\t",*(*(matAptr+i)+j));
        }
        printf("\n");
    }


    printf("enter the elements of the second matrix\n");
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){    
            scanf("%d",(*(matBptr+i)+j));
        }
    }

    printf("the elements of the second matrix are:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){    
            printf("%d\t",*(*(matBptr+i)+j) );
        }
        printf("\n");
    }

    printf("Both matrix are elem , seperated:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){    
            printf("%d, %d\t",*(*(matBptr+i)+j), *(*(matAptr+i)+j) );
        }
        printf("\n");
    }
     
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            **sum=*(*(matAptr+i)+j) + *(*(matBptr+i)+j);
        }
    }
    printf("On adding these two matrices\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",**sum);
        }
        printf("\n");
    }
    return 0;
}