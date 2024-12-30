#include <stdio.h>
#include <ctype.h>

#define NUM_UNITS 3

const char SUPPORTED_UNITS[NUM_UNITS] = {'C', 'F', 'K'};

typedef struct {
  char from;
  char to;
  float (*convert)(float);
} Conversion;

float c_to_f(float temp) { return (temp * 9 / 5) + 32; }
float c_to_k(float temp) { return temp + 273.15; }
float c_to_c(float temp) { return temp; }
float f_to_c(float temp) { return (temp - 32) * 5 / 9; }
float f_to_k(float temp) { return (temp - 32) * 5 / 9 + 273.15; }
float f_to_f(float temp) { return temp; }
float k_to_c(float temp) { return (temp * 9 / 5) + 32; }
float k_to_f(float temp) { return (temp - 273.15) * 9 / 5 + 32; }
float k_to_k(float temp) { return temp; }

Conversion conversions[] = {
  {'C', 'F', c_to_f}, {'C', 'K', c_to_k}, {'C', 'C', c_to_c},
  {'F', 'C', f_to_c}, {'F', 'K', f_to_k}, {'F', 'F', f_to_f},
  {'K', 'C', k_to_c}, {'K', 'F', k_to_f}, {'K', 'K', k_to_k},
};

#define NUM_CONVERSIONS (sizeof(conversions) / sizeof(Conversion))
_Static_assert(NUM_CONVERSIONS == NUM_UNITS * NUM_UNITS, 
               "Error: NUM_CONVERSIONS does not match the expected permutations.");


int check_valid_unit(char unit) {
  for (int i = 0; i < NUM_UNITS; i++) {
    if (SUPPORTED_UNITS[i] == unit) {
      return 1;
    }
  }
  printf("Invalid unit %c", unit);
  return 0;
}

int main(int argc, char const *argv[])
{
  // float n1 = sizeof(conversions);
  // float n2 = sizeof(Conversion);
  // printf("%f\n", n1);
  // printf("%f\n", n2);
  // printf("%zu\n", NUM_CONVERSIONS);
  // printf("%d\n", NUM_CONVERSIONS);

  char inputUnit, outUnit;
  float inputTemp, temp;

  printf("\nEnter the input temperature unit %c: ", SUPPORTED_UNITS);
  scanf(" %c", &inputUnit);
  inputUnit = toupper(inputUnit);

  printf("\nEnter the output temperature unit %c: ", SUPPORTED_UNITS);
  scanf(" %c", &outUnit);
  outUnit = toupper(outUnit);

  if (!check_valid_unit(inputUnit) || !check_valid_unit(outUnit)) { return 1; }

  printf("\nEnter the temperature: ");
  scanf("%f", &inputTemp);

  // inputUnit = 'C';
  // outUnit = 'F';
  // inputTemp = 21;

  for (int i = 0; i < NUM_CONVERSIONS; i++) {
    if (conversions[i].from == inputUnit && conversions[i].to == outUnit) {
      temp = conversions[i].convert(inputTemp);
      break;
    }
  }
  
  printf("\n%.2fdeg%c -> %.2fdeg%c", inputTemp, inputUnit, temp, outUnit);
  return 0;
}

