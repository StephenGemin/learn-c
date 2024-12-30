#include <stdio.h>
#include <stdbool.h>

/* summary of the ctypes and how to print them to stdout */

int main(int argc, char const *argv[])
{
  char a = 'C';                  // single character                             %c
  char b[] = "Bro";              // array of characters                          %s

  float c = 3.141592;            // 4 bytes (32 bits of precision) 6-7 digits    %f
  double d = 3.14159129034;      // 8 bytes (64 bits of precision) 15-16 digits  %1f

  bool e = true;                 // 1 byte (true or false)                       %d

  char f = 100;                  // 1 byte (-128 to +127)                        %d or %c (ACSII)
  unsigned char g = 100;         // 1 byte (0 to +255)                           %d or %c (ASCII)

  short int h = 32767;           // 2 bytes (-32,768 to +32,768)                 %d
  short i = 32767;               // 2 bytes (-32,768 to +32,768)                 %d
  unsigned short int j = 65535;  // 2 bytes (0 to +65,535)                       %d

  int k = 2147483647;           // 4 bytes (-2,147,483,648 to +2,147,483,647)   %d
  unsigned int l = 2147483647;  // 4 bytes (0 to +4,294,967,295)                %u

  long long m = 9223372036854775807; // 8 bytes (-9,223,372,036,854,775,808 to +9,223,372,036,854,775,807)   %lld
  unsigned long long n = 18446744073709551615U;  // 8 bytes (0 to +18,446,744,073,709,551,615)  %llu



  // printf("%c\n", a);     // char
  // printf("%s\n", b);     // character array
  // printf("%f\n", c);     // float
  // printf("%1fn\n", d);   // double
  // printf("%d\n", e);     // bool
  // printf("%d\n", f);     // char as numeric value
  // printf("%d\n", g);     // unsigned char as numeric value
  // printf("%d\n", h);     // short
  // printf("%d\n", i);     // short without specifying "int"
  // printf("%d\n", j);     // unsigned sohrt
  // printf("%d\n", k);     // int
  // printf("%d\n", l);     // unsigned itn
  // printf("%lld\n", m);   // long long
  // printf("%llu\n", n);   // unsigned long long
  return 0;
}
