#include<stdio.h>
#include<math.h>
//#define pi 3.1416
int main()
{
    float r,area=0;
    scanf("%f",&r);
    float pi;
    pi= acos(-1);
    area= 4*pi*r*r;
    printf("%.2f",area);
    return 0;

}