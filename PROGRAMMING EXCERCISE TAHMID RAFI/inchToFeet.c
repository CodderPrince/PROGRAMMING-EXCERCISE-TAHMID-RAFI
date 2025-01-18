#include<stdio.h>
int main()
{
    int inch;
    printf("Enter brother height in inch: ");
    scanf("%d", &inch);
  int need_ticket= (inch>=36);
  printf("Need_ticket: %d\n",need_ticket);
  return 0;
}