#==============================================================
# string

CPP     = g++
OPTIONS = -g -pg -Wall -W -Wunused -Wuninitialized -Wshadow 

EXE1 = test_default_ctor test_c_str_ctor
EXE2 = test_length test_subscript 
EXE3 = test_less_than test_greater_than
EXE4 = test_plus test_greater_than_or_equal 
EXE5 = test_less_than_or_equal test_equal
EXE6 = test_sub_string test_find_char test_find_string test_not_equal test_input test_output test_split test_assign test_swap test_get test_reallocate
# test_find_t_n_blank test_find_t_n_n_blank test_justify_string

#==============================================================
msg:
	@echo 'Targets are:'
	@echo '  string'
	@echo '  leaktest'
	@echo '  test_XXX  (where test_XXX is a test program)'
	@echo '  clean'
	@echo '  splits'
	@echo '  tests'
	@echo '  logview'
#==============================================================
# Run all tests
string: $(EXE1) $(EXE2) $(EXE3) $(EXE4) $(EXE5) $(EXE6)  
	./test_default_ctor
	./test_c_str_ctor
	./test_subscript
	./test_length
	./test_less_than
	./test_greater_than
	./test_plus
	./test_greater_than_or_equal
	./test_less_than_or_equal
	./test_equal
	./test_sub_string
	./test_find_char
	./test_find_string
	./test_not_equal
	./test_input
	./test_output
	./test_swap
	./test_get
	./test_assign 
	./test_reallocate
	./test_split

tests: $(EXE1) $(EXE2) $(EXE3) $(EXE4) $(EXE5) $(EXE6) 
	./test_default_ctor
	./test_c_str_ctor
	./test_subscript
	./test_length
	./test_less_than
	./test_greater_than
	./test_plus
	./test_greater_than_or_equal
	./test_less_than_or_equal
	./test_equal
	./test_sub_string
	./test_find_char
	./test_find_string
	./test_not_equal
	./test_input
	./test_output
	./test_swap
	./test_get
	./test_assign 
	./test_reallocate
	./test_split

splits: $(EXE1) $(EXE2) $(EXE3) $(EXE4) $(EXE5) $(EXE6) 
	./test_default_ctor
	./test_c_str_ctor
	./test_subscript
	./test_length
	./test_less_than
	./test_greater_than
	./test_plus
	./test_greater_than_or_equal
	./test_less_than_or_equal
	./test_equal
	./test_sub_string
	./test_find_char
	./test_find_string
	./test_not_equal
	./test_input
	./test_output
	./test_swap
	./test_get
	./test_assign 
	./test_reallocate
	./test_split

logview: $(EXE1) $(EXE2) $(EXE3) $(EXE4) $(EXE5) $(EXE6) $(LOGV)
	./test_default_ctor
	./test_c_str_ctor
	./test_subscript
	./test_length
	./test_less_than
	./test_greater_than
	./test_plus
	./test_greater_than_or_equal
	./test_less_than_or_equal
	./test_equal
	./test_sub_string
	./test_find_char
	./test_find_string
	./test_not_equal
	./test_input
	./test_output
	./test_swap
	./test_get
	./test_assign 
	./test_reallocate
	./test_split
	./logview all ~jmaletic/public_html/CS33001/programs/data/log_4_large.txt
	./logview bytes ~jmaletic/public_html/CS33001/programs/data/log_4_large.txt
	./logview host ~jmaletic/public_html/CS33001/programs/data/log_4_large.txt
	./logview all ~jmaletic/public_html/CS33001/programs/data/log_5_huge.txt
	./logview bytes ~jmaletic/public_html/CS33001/programs/data/log_5_huge.txt
	./logview host ~jmaletic/public_html/CS33001/programs/data/log_5_huge.txt
#==============================================================
# string type
string.o: string.h string.cpp
	$(CPP) -c $(OPTIONS) string.cpp

#===========================================================================
# Compile test programs
#----------------------------------------------------------------------------
test_%: string.o test_%.o
	$(CPP) ${OPTIONS} string.o test_$*.o -o test_$*

test_%.o: string.h test_%.cpp
	$(CPP) $(OPTIONS) -c test_$*.cpp

logview: logview.o string.o logentry.o
	$(CPP) ${OPTIONS} logview.o string.o logentry.o -o logview

logview.o: string.h logentry.h logview.cpp
	$(CPP) $(OPTIONS)-c logview.cpp

logentry.o:string.h logentry.h logentry.cpp
	 $(CPP) $(OPTIONS)-c logentry.cpp
#===========================================================================
leaktest: $(EXE1) $(EXE2) $(EXE3) $(EXE4) $(EXE5) $(EXE6)
	valgrind ./test_default_ctor
	valgrind ./test_c_str_ctor
	valgrind ./logview
	valgrind ./splits
#===========================================================================
.PRECIOUS: test_%.o string.o

#==============================================================
# clean should remove all .o files and all executables
clean:
	rm -f *.o
	rm -f test_default_ctor test_c_str_ctor
	rm -f test_length test_subscript
	rm -f test_less_than test_greater_than
	rm -f test_plus test_greater_than_or_equal
	rm -f test_less_than_or_equal test_equal
	rm -f test_sub_string test_find_char
	rm -f test_find_string test_not_equal
	rm -f test_input test_output
#	rm -f test_find_t_n_blank test_find_t_n_n_blank
#	rm -f test_justify_string
	rm -f logview test_split
	rm -f test_swap test_get 
	rm -f test_assign test_reallocate