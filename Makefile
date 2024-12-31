CC = gcc
WARNING_FLAGS= -Wall -Wextra -Werror
IGNORE_FLAGS = \
	-Wno-unused-variable \
	-Wno-unused-but-set-variable \
	-Wno-implicit-function-declaration \
	-Wno-int-conversion \
	-Wno-unused-parameter
CFLAGS = -g -I./src $(WARNING_FLAGS) $(IGNORE_FLAGS)

# Directories
EXERCISES_DIR = exercises
SRC_DIR = src
BUILD_DIR = build

# Source files
EXERCISES = $(wildcard $(EXERCISES_DIR)/*.c)
REUSABLE_SRC = $(wildcard $(SRC_DIR)/*.c)

# Object files
REUSABLE_OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(REUSABLE_SRC))

EXERCISE_EXES = $(patsubst $(EXERCISES_DIR)/%.c, $(BUILD_DIR)/%, $(EXERCISES))

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

run: $(BUILD_DIR)/$(program)
	./$(BUILD_DIR)/$(program)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean run
