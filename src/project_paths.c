#include <stdio.h>
#include <stdlib.h>

const char *project_root() {

    const char *pHome_dir = getenv("HOME");
    static char project_path[1024];

    if (pHome_dir == NULL) {
        fprintf(stderr, "Error: HOME environment variable not set.\n");
        return NULL;
    }
    
    snprintf(project_path, sizeof(project_path), "%s/repos/StephenGemin/learn-c", pHome_dir);
    // printf("$HOME=%s\n", pHome_dir);
    return project_path;
}

const char *get_data_dir() {
    static char data_dir[1024];
    const char *project_path = project_root();
    if (project_path == NULL)
    {
        return NULL;
    }
    
    snprintf(data_dir, sizeof(data_dir), "%s/data", project_path);
    return data_dir;
}
