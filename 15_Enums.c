#include <stdio.h>
#include <string.h>

enum Day
{
  Sun,
  Mon,
  Tue,
  Wed,
  Thu,
  Fri,
  Sat
};

enum Silverware {Spoon = 1, Fork = 2, Knife = 3};

int main(int argc, char const *argv[])
{
  enum Day today = Sun;
  printf("%d\n", today); // enums are NOT STRINGS, but they can be treated as int

  if (today == Sun || today == Sat)
  {
    printf("It's the weekend! Party time!\n");
  } else
  {
    printf("It's a weekday\n");
  }

  enum Silverware spoon = Spoon;
  printf("spoon %d\n", spoon);  
  enum Silverware fork = Fork;
  printf("fork %d\n", fork);  
  enum Silverware knife = Knife;
  printf("knife %d\n", knife);  
  
  return 0;
}
