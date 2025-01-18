#include<stdio.h>
int main()
{
    int row,space,star;
    printf("Enter row number: ");
    scanf("%d",&row);
    //jotogulo row hobe tar half input nite hobe
    for(int i=1; i<=row; i++)
    {
        for(space=1; space<=row-i; space++)
        {
         /*jodi kheyal kora hoi tahole dekha jabe je
         jotogulo row tar theke space i poriman besi ase
         5ta row hole 1st half e 4ta space tarpor 1ta star*/
            printf(" ");
        }
            for(star=1; star<=2*i-1; star++)
        {
         /*majher condition tai main ekhane dekhano hoyese
         kotogulo star print hobe1st 2*1-1=1ta star print hobe
         tarpor 2*2-1=3ta star print hobe ebhabe loop cholbe*/
            printf("*");
           
        }
         printf("\n");
         /*proti star print er pore ekta kore new line dite hobe
         and seta obossoi looper baire ese dite hobe*/
    }
    
        for(int i=1; i<=row-1; i++)
    {/*ebar jodi kheyal kori 1st half complete howar por amar
     je row lagbe seta ekhon 1 ghor kom lagbe ekhon output er 
      dike kheyal raklei bujhbo je amar row 1 ghor kore komse*/
        for(space=1; space<=i; space++)
        /*space tao ekhon 1ghor komse shudu
        notice output for better understanding
        VALO KORE KHEYAL KORLEI DEKHA JABE SPACE 1 KORE KOMSE*/
        {
            printf(" ");
        }
            for(star=1; star<=2*(row-i)-1; star++)
            /*ekhon amar star komte thakbe jodi row 3 ta hoi
            tahole amar akhon star lagbe 3ta tai ei condition
            2*(3-1)-1=3 asole jotogulo star lagbe toto porjonto cholbe*/
       {
             printf("*");
       }
            printf("\n");
    }
        return 0;
}
/*1st half and 2nd half vag kore korte hobe tahole ar kono somossa hobe na
practice more and more for better programmer!*/
    
