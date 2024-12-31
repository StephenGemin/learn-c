#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <limits.h>
#include "paths.h"

void list_data_files() {
    const char *data_file = get_data_path();;
    DIR *dir = opendir(data_file);
    printf("%s\n", data_file);
    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        printf("  %s\n", entry->d_name);
    }
}

int main(int argc, char const *argv[])
{
    const char *pData_path = get_data_path();
    static char pData_file[PATH_MAX];
    snprintf(pData_file, sizeof(pData_file), "%s/test.txt", pData_path);
    // printf("%s\n", pData_file);

    // list_data_files();

    FILE *pF = NULL;
    pF = fopen(pData_file, "w");

    if (pF == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    fprintf(pF, "foo\nbar\nbiz");

    fclose(pF);
    exit(EXIT_SUCCESS);
}
