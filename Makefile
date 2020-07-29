.PHONY: clean

CXX = g++
CXXFLAGS = -Iinclude/ -Wall -Werror

%.o: %.cpp include/l33tsp34k.hpp
	$(CXX) $< -c -o $@ $(CXXFLAGS)
 
l33tsp34k: l33tsp34k.o l33tsp34k_aux.o
	$(CXX) l33tsp34k.o l33tsp34k_aux.o -o l33tsp34k

clean:
	rm -rf %.o
	rm -rf l33tsp34k
	rm -rf l33tsp34k.exe
