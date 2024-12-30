#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <libgen.h>
#include <dirent.h>
//#include "project_paths.h"

// /*
//   To debug -> Error opening file: Permission denied
// */
// void printCwd() {
//     char cwd[1024];
//     if (getcwd(cwd, sizeof(cwd)) != NULL) {
//         printf("cwd=%s\n", cwd);
//     } else {
//         perror("getcwd() error");
//     }
// }

int main(int argc, char const *argv[])
{
    char cwd_path[1024];
    strncpy(cwd_path, argv[0], sizeof(cwd_path));
    cwd_path[sizeof(cwd_path) - 1] = '\0'; // Ensure null termination
    printf("cwd_path=%s\n", cwd_path);


    // char *pProject_dir = dirname(dirname(cwd_path));
    // // // pCwd_dir = dirname(cwd_path);
    // // printf("cwd_dir=%s\n", pCwd_dir);
    // // // chdir(pCwd_dir);
    // // printCwd();
    // static char data_file[1024];
    // snprintf(data_file, sizeof(data_file), "%s/data/test.txt", pProject_dir);
    const char *data_file = "./data/test.txt";
    // const char *data_file = "./data/";
    // DIR *dir = opendir(data_file);
    // printf("%s\n", data_file);
    // struct dirent *entry;
    // while ((entry = readdir(dir)) != NULL) {
    //     printf("  %s\n", entry->d_name); // Print each entry name
    // }
    FILE *pF = NULL;
    pF = fopen(data_file, "w");

    if (pF == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    fprintf(pF, "foo\nbar\nbiz");

    fclose(pF);
    exit(EXIT_SUCCESS);
}
