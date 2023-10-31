# Compiler to use
CC = g++

# Compiler flags
CFLAGS = -Wall -std=c++20

# Target executable
TARGET = $(BIN_DIR)/program

# Source files
SRCS = main.cpp template.cpp

# Header files
HEADERS = template.hpp

# Directory for object files
OBJ_DIR = obj
BIN_DIR = bin

# Object files with directory path
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

all: $(TARGET)

$(TARGET): $(OBJS)
	mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to build object files from source files
$(OBJ_DIR)/%.o: %.cpp $(HEADERS)
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BIN_DIR) $(OBJ_DIR)
