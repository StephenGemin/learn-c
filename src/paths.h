#ifndef PATHS_H
#define PATHS_H

#include <stddef.h>
#define _POSIX_C_SOURCE 200809L

/**
 * Retrieves the absolute path to the current project directory.
 * @return A constant string representing the project path, or NULL on error.
 */
const char *get_project_path();

/**
 * Retrieves the absolute path to the 'data' directory within the project.
 * @return A constant string representing the data path, or NULL on error.
 */
const char *get_data_path();

#endif