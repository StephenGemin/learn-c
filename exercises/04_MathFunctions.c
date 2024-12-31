#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  double A = sqrt(9.2);
  double B = pow(2,4);
  int C = round(3.14);
  int D = ceil(3.14);
  int E = floor(3.99);
  double F = fabs(-100.0);
  double G = log(3);
  double H = sin(45);
  double I = cos(45);
  double J = tan(45);

  printf("\nA=%1f", A);
  printf("\nB=%1f", B);
  printf("\nC=%d", C);
  printf("\nD=%d", D);
  printf("\nE=%d", E);
  printf("\nF=%1.5f", F);
  printf("\nG=%1.5f", G);
  printf("\nH=%1.5f", H);
  printf("\nI=%1.5f", I);
  printf("\nJ=%1.5f", J);

  return 0;
}
