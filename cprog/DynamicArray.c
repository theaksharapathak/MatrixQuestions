#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **ptr,i,j,row,col;

    printf("enter the no of rows and column\n");
    scanf("%d %d",&row,&col);

    ptr=(int **)malloc(row*sizeof(int *));

   
    //assigning array for each row
    for(i=0;i<row;i++){
        ptr[i]=(int *)malloc(col*sizeof(int));
    }
    printf("enter th elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",(*(ptr+i)+j));
        }
    }

    printf("the elements are:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",*(*(ptr+i)+j));
        }
        printf("\n");
    }

    return 0;


}
