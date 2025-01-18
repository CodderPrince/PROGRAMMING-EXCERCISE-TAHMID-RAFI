#include<stdio.h>
int main()
{
    int number=3,i;
    for(i=1; i<=100; i++,number+=3)
    {
        printf("%d\n",number);
    }
}