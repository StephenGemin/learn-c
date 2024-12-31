#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rollDice() {
  int number = (rand() % 6) + 1;
  return number;
}

int main(int argc, char const *argv[])
{
  srand(time(0));  // If you comment this out, the numbers will always be the same
  int number1 = (rand() % 6) + 1;  // dice roll
  printf("%d\n", number1);

  for (int i = 0; i < 10; i++)
  {
    int number = rollDice();
    printf("Roll %d -> %d\n", i, number);
  }
  
  return 0;
}
