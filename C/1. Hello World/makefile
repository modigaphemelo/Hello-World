# Makefile for helloworld.c

# Compiler and flags
CXX = gcc
CXXFLAGS = -std=c11 -Wall

# Target executable
TARGET = helloworld

# Source files
SOURCES = helloworld.c

# Default target: build the executable
all: $(TARGET)

# Rule to build the target
$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

# Clean up generated files
clean:
	rm -f $(TARGET)
