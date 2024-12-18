#include <stdio.h>

int main()
{
  /*
  This is a 
  block comment
  */
  printf("I like pizza!\n");
  printf("It's really good\n"); // this is a comment

  int x;
  x = 123;
  int y = 312;

  int age = 21;
  float money = 2.12;
  char grade = 'C';
  char name[] = "bro"; // array of characters, string is an object, not a data type

  printf("Hello %s\n", name);
  printf("You are %d years old\n", age);
  printf("Your average grade is %c", grade);
  return 0;
}
