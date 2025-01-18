#include<stdio.h>
#include<string.h>
int main()
{
    char p;
    int s=0;
    printf("Enter any long integer number: ");
    while(scanf("%c",&p) && p!='\n')
    {
        s = s + p;
    }
    if(s%3==0)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}