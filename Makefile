# Makefile

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -Wextra

# Executable name
TARGET = test_runner

# Source files
SRCS = main.cpp Invoice.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Header files
HDRS = Addition.h UnitTest.h EquivalenceTests.h Invoice.h InvoiceTest.h

# Build and run tests
.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

run: all
	./$(TARGET)

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)