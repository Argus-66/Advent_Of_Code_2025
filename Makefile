CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra

# Find all day directories
DAYS = $(wildcard day*)
SOLUTIONS = $(addsuffix /solution, $(DAYS))

.PHONY: all clean $(DAYS)

all: $(SOLUTIONS)

%/solution: %/solution.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f $(SOLUTIONS)

# Individual day targets
$(DAYS):
	$(CXX) $(CXXFLAGS) $@/solution.cpp -o $@/solution
