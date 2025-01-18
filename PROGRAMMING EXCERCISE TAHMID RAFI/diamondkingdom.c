#include<stdio.h>
int main()
{
    int row,space,number,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(row=1; row<=n; row++)
        {
            for(space=1; space<=row; space++)
            {
                printf("%d ",m);
            }
            printf("\n");
        }
        for(row=n-1; row>=1; row--)
        {
            for(space=1; space<=row; space++)
            {
                printf("%d ",m);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}