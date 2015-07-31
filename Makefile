CXX=g++
CXXFLAGS=-std=c++11 -o

DSVFILES=Delimiter-separated-values/main.cpp
GLXFILES=Get-line-x/main.cpp

OBJ=f_io.o

dsv:
	$(CXX) $(CXXFLAGS) $(OBJ) $(DSVFILES)
	
glx:
	$(CXX) $(CXXFLAGS) $(OBJ) $(GLXFILES)

clean:
	rm -f $(OBJ) 
