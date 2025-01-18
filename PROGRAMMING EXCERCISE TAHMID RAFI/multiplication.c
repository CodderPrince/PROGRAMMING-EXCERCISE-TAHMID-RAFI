#include<stdio.h>
int main()
{
    int number,i;
    scanf("%d",&number);
    for(i=1; i<=10; i++)
    {
        printf("%3d x %2d = %4d\n",number,i,number*i);
    }
    return 0;
}