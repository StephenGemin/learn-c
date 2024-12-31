#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  int numbers[][3] = {{1,2,3},{4,5,6}};
  for (size_t i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
  {
    for (size_t j = 0; j < sizeof(numbers[0])/sizeof(numbers[0][0]); j++)
    {
      printf("%d\n", numbers[i][j]);
    }   
  }

  char cars[][10] = {"Mustang","Corvette","Camaro"};
  strcpy(cars[0], "Bentley");
  for (size_t i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
  {
    printf("car[%ld]=%s\n", i, cars[i]);
  }

  return 0;
}
