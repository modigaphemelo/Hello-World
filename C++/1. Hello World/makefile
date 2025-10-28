# Makefile for hello.cpp

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Target executable
TARGET = hello

# Source files
SOURCES = helloworld.cpp

# Default target: build the executable
all: $(TARGET)

# Rule to build the target
$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

# Clean up generated files
clean:
	rm -f $(TARGET)