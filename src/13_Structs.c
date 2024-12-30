#include <stdio.h>
#include <string.h>

struct Player
{
  char name[12];
  int score;
};


int main(int argc, char const *argv[])
{
  struct Player player1;
  struct Player player2;

  strcpy(player1.name, "Foo");
  player1.score = 4;
  strcpy(player2.name, "Bar");
  player2.score = 8;

  printf("Player1 name=%s; score=%d\n", player1.name, player1.score);
  printf("Player2 name=%s; score=%d\n", player2.name, player2.score);
  return 0;
}
