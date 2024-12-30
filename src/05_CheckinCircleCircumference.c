#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

  const double PI = acos(-1);
  double radius;
  double circumference;
  double area;

  printf("\nEnter radius of a circle (units in meters): ");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius;
  area = PI * radius * radius;

  printf("\nCircle calculations in meters");
  // printf("\nradius=%f", radius);
  printf("\ncircumference=%1.3f", circumference);
  printf("\narea=%1.3f", area);

  return 0;
}
