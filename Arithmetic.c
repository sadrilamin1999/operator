#include<stdio.h>

int main()
{
  int num1,num2,sum, avg;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1,&num2);
  avg = (num1+num2) / 2;
  printf("The avg = %d\n", avg);
  getch();
}
