//write a program to calculate the area of a tringle
#include<stdio.h>

int main()
{
  float base,height,area;
  printf("Base: ");
  scanf("%f", &base);
  printf("Height: ");
  scanf("%f",&height);
  area= (float)1/2*base*height;
  printf("Area is: %f\n", area);
  getch();
}
