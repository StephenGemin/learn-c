#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

const char *get_project_path() {
    char *pPath = realpath(".", NULL);

    if (pPath == NULL)
    {
        perror("Unable to get project path");
        return NULL;
    }

    // printf("project_path: %s\n", pProject_path);
    return pPath;
}

const char *get_data_path() {
    const char *pProject_path = get_project_path();
    if (pProject_path == NULL) {
        return NULL;
    }

    static char data_path[PATH_MAX];
    snprintf(data_path, sizeof(data_path), "%s/data", pProject_path);
    // printf("data_path: %s\n", data_path);
    free((void *)pProject_path);
    return data_path;
}
