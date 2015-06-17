CXX=g++
CXXFLAGS=-std=c++11 -o

DSVFILES=Delimiter-separated-values/main.cpp

OBJ=f_io.o

dsv:
	$(CXX) $(CXXFLAGS) $(OBJ) $(DSVFILES)

clean:
	rm -f $(OBJ) 
