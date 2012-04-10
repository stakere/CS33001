# Make file for Profiler

#=============================================================
CPP      = g++
CPP_OPTS = -g -Wall -W -Wunused -Wuninitialized -Wshadow 

#=============================================================
profiler : main.o ASTree.o 
	$(CPP) $(CPP_OPTS) -o profiler main.o ASTree.o 
  
main.o : main.cpp ASTree.hpp
	$(CPP) $(CPP_OPTS) -c main.cpp

ASTree.o   : ASTree.hpp ASTree.cpp
	$(CPP) $(CPP_OPTS) -c ASTree.cpp

#=============================================================
#This will clean up everything via "make clean"
clean :
	rm -f profiler *.o 

