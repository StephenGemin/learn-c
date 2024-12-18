#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  int name_size = 25;
  char name[name_size];
  int age;

  printf("What's your name?");
  // scanf("%s", &name);  // only works if there are no white spaces in the name
  fgets(name, name_size, stdin);
  name[strlen(name) - 1] = '\0';  // get rid of \n at end of input that includes whitespaces

  printf("How old are you?");
  scanf("%d", &age);

  printf("\nHello %s, how are you?", name);
  printf("\nYou are %d years old.", age);
  return 0;
}
