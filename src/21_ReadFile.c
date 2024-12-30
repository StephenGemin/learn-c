#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 255

int main(int argc, char const *argv[])
{
    const char *file = ".data/readfile.txt";
    FILE *pF = fopen(file, "r");
    char buffer[BUFFER_SIZE];

    if (pF == NULL)
    {
        char error_message[1024];
        snprintf(error_message, sizeof(error_message), "Error opening file '%s'", file);
        perror(error_message);
        exit(EXIT_FAILURE);
    }
    
    while (fgets(buffer, BUFFER_SIZE, pF) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(pF);
    exit(EXIT_SUCCESS);
}
