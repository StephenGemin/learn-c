#include <stdio.h>

int main(int argc, char const *argv[])
{
  double prices[10] = {5.0,4.0,10};
  char name[] = "FooBar";
  prices[3] = 20;
  prices[0] = -1;
  prices[9] = 9;
  prices[5] = 'C';  // converts to ascii decimal
  for (int i = 0; i < sizeof(prices)/sizeof(prices[0]) ; i++)
  {
    printf("%f\n", prices[i]);
  }  
  printf("name=%s\n", name);
  return 0;
}
