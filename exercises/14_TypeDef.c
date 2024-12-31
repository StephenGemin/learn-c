#include <stdio.h>
#include <string.h>

/*
Using typedef
Create array of structs
*/

typedef char user[25];

typedef struct
{
  char name[25];
  char password[12];
  int id;
} User;

typedef struct
{   
  char name[12];
  float gpa;
} Student;


int main(int argc, char const *argv[])
{
  user user0 = "The first one";
  User user1 = {"Foo", "password", 123};
  User user2 = {"Bar", "password", 456};
  
  printf("%s\n", user0);
  printf("%s\n", user1.name);
  printf("%s\n", user2.name);

  Student student0 = {"Spongebob", 2.7};
  Student student1 = {"Patrick", 1.2};
  Student student2 = {"Sandy", 4};
  Student student3 = {"Squidward", 2.0};
  Student students[] = {student0, student1, student2, student3};

  printf("Student information:\n");
  for (size_t i = 0; i < sizeof(students)/sizeof(students[0]); i++)
  {
    printf("  * %-12s\tgpa=%.1f\n", students[i].name, students[i].gpa);
  }
  
  return 0;
}
