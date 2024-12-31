#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char string1[] = "ABCD";
  char string2[] = "VXYZ";

  // strlwr(string1);                // converts a string to lowercase
  // strupr(string1);                // converts a string to upper
  // strcat(string1, string2);       // appends string2 to end of string1
  // strncat(string1, string2, 1);   // appends n characters from string2 to string1
  // strcpy(string1, string2);       // copy string2 to string1
  // strncpy(string1, string2, 2);   // copy n characters of string2 to string1

  // NOTE: these were not available in the C libraries I downloaded for Windows
  // strset(string1, '?');           // sets all characters of a string to a given character
  // strnset(string1, 'x', 1);       // sets first n characters of a string to a given character
  // strrev(string1);                // reverses a string

  printf("string1=%s; string2=%s", string1, string2);

  int result = strlen(string1);               // string length as int
  // int result = strcmp(string1, string2);      // compare all characters
  // int result = strncmp(string1, string2, 2);  // compare n characters
  // int result = strcmpi(string1);              // compare all (ignore case)
  // int result = strnicmp(string1);             // compare n characters (ignore case)

  printf("\nresult=%i; string1=%s; string2=%s", result, string1, string2);

  return 0;
}
