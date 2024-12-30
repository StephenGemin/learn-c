#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  const int MIN = 1;
  const int MAX = 20;
  const int MAX_ALLOWED_GUESSES = 5;
  int guess;
  int guesses = 0;
  int answer;

  srand(time(0));  // use current time as a seed

  answer = (rand() % MAX) + MIN;
  // printf("%d\n", answer);

  printf("Guess a number between %d and %d\n", MIN, MAX);
  do
  {
    printf("Enter a guess:", MIN, MAX);
    scanf("%d", &guess);
    if (guess > answer)
    {
      printf("Too high\n");
    } else if (guess < answer)
    {
      printf("Too low\n");
    } else {
      printf("correct!\n");
    }
    guesses += 1;
  } while (guesses < MAX_ALLOWED_GUESSES && guess != answer);
  

  return 0;
}
