//area = aqrt(s*(s-a)*(s-b)*(s-c)
//s= (a+b+c)/2

#include<stdio.h>
int main()
{
  double a,b,c,s, area; //squre rote always return a double type varibale
  printf("Enter three value: ");
  scanf("%lf%lf%lf", &a,&b,&c);
  s=(a+b+c)/2;
  area= sqrt(s*(s-a)*(s-b)*(s-c));
  printf("%lf\n",area);
  getch();
}
