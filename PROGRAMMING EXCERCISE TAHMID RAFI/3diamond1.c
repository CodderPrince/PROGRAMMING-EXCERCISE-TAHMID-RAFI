#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d",&row);
    for(int i=1; i<=row; i++)
    {
        for(col=row; col>i; col--)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}