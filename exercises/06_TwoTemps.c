#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
  char inputUnit, unit;
  float inputTemp;
  float temp;

  printf("\nIs the temperature in (F) or (C)? ");
  scanf("%c", &inputUnit);
  inputUnit = toupper(inputUnit);

  printf("\nEnter the temperature: ");
  scanf("%f", &inputTemp);
  
  if (inputUnit == 'C'){
    temp = (inputTemp * 9 / 5) + 32;
    unit = 'F';
  } else if(inputUnit == 'F') {
    temp = (inputTemp -32) * 5 / 9;
    unit = 'C';
  } else {
    printf("Not a valid temperature unit %c", inputUnit);
    return 1;
  }
  printf("%.2fdeg%c -> %.2fdeg%c", inputTemp, inputUnit, temp, unit);
  return 0;
}

