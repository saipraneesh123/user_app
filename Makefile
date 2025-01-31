##############################################################################
# print - Custom application for ARM64 (aarch64)
############################################################################

# Set the compiler
CC = aarch64-linux-gnu-gcc

# Set the compiler flags (optional)
CFLAGS = -Wall -g

# Set the target executable name
TARGET = print_cmd

# Set the source file
SRC = print.c

# Default rule (when you just run 'make')
all: $(TARGET)

# Rule to compile the source file
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Clean rule to remove generated files
clean:
	rm -f $(TARGET)
