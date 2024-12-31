# Compiler and flags
CC = gcc
CFLAGS = -g -I./src -Wall -Wextra -Werror -Wno-unused-variable -Wno-unused-but-set-variable -Wno-implicit-function-declaration -Wno-int-conversion -Wno-unused-parameter

# Directories
EXERCISES_DIR = exercises
SRC_DIR = src
BUILD_DIR = build

# Source files
EXERCISES = $(wildcard $(EXERCISES_DIR)/*.c)
REUSABLE_SRC = $(wildcard $(SRC_DIR)/*.c)

# Object files
REUSABLE_OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(REUSABLE_SRC))

# Executables (one for each exercise)
EXERCISE_EXES = $(patsubst $(EXERCISES_DIR)/%.c, $(BUILD_DIR)/%, $(EXERCISES))

# Default target
all: $(EXERCISE_EXES)

# Rule to build each executable
$(BUILD_DIR)/%: $(BUILD_DIR)/%.o $(REUSABLE_OBJS)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $^ -o $@

# Rule to build exercise object files
$(BUILD_DIR)/%.o: $(EXERCISES_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to build reusable object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Run a specific program
run: $(BUILD_DIR)/$(program)
	./$(BUILD_DIR)/$(program)

# Clean target to remove build artifacts
clean:
	rm -rf $(BUILD_DIR)

# Phony targets
.PHONY: all clean run

