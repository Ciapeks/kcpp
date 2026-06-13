CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -I./include

TARGET = ProgramZadan

SRCS = main.cc $(wildcard src/*.cc)

OBJS = $(SRCS:.cc=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) main.o src/*.o