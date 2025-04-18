# Makefile for building your C++ program

# Compiler
CXX = g++
# Compiler flags
CXXFLAGS = -std=c++17 -Wall

# Output binary name
TARGET = data_conversion

# Source files
SRCS = Data\ Conversion.cpp

# Rule to build the target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean up build artifacts
clean:
	rm -f $(TARGET)
