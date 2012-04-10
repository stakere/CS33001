#============================================================================
#  stack class makefile
#===========================================================================

CPP          = g++
CPP_FLAGS    = -g -Wall -W -Wunused -Wuninitialized -Wshadow 
INCLUDE_OPT  = -iquote . -iquote ../string
TEST_1 = test_1
TEST_2 = test_2
TEST_3 = test_3
TEST_4 = test_4
TEST_5 = postfix

#-------------------------------------------------------------------------------
STRING_DIR = ../string/

#===========================================================================
msg:
	@echo 'Targets for compiling test programs:'
	@echo '   tests'
	@echo '   clean'

#===========================================================================
# Compile string.o
string.o:	${STRING_DIR}string.h  ${STRING_DIR}string.cpp
	${CPP} ${CPP_FLAGS} ${INCLUDE_OPT} -c ${STRING_DIR}string.cpp

#===========================================================================
# Compile test programs
#----------------------------------------------------------------------------
test_%: string.o test_%.o
	${CPP} ${CPP_FLAGS} string.o test_$*.o -o test_$*

test_%.o: ${STRING_DIR}string.h stack.h test_%.cpp
	${CPP} ${CPP_FLAGS} ${INCLUDE_OPT} -c test_$*.cpp

postfix: postfix.o blah.o stack.o string.o
	${CPP} ${CPP_FLAGS} postfix.o blah.o stack.o string.o -c postfix

#postfix.o: postfix.cpp
#	${CPP} ${CPP_FLAGS} ${INCLUDE_OPT} -c postfix.o 



#===========================================================================
# Run test programs

tests: ${TEST_1} ${TEST_2} ${TEST_3} ${TEST_4} 
	./test_1
	./test_2
	./test_3
	./test_4
	./postfix
#===========================================================================
# Run memory tests

memtests: ${TEST_1} ${TEST_2} ${TEST_3} ${TEST_4}
	valgrind ./test_1
	valgrind ./test_2
	valgrind ./test_3
	valgrind ./test_4
	valgrind ./postfix
#===========================================================================
.PRECIOUS: test_%.o string.o

#============================================================================
clean:
	rm -f *.o a.out
	rm -f test_1
	rm -f test_2
	rm -f test_3
	rm -f test_4
	rm -f postfix
