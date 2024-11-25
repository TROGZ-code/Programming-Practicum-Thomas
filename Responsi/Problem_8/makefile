# Target to compile the object file
problem_8: problem_8.o
	g++ problem_8.o -o problem_8.exe

# Target to compile the C++ program
problem_8.o: problem_8.cpp
	g++ -c problem_8.cpp -o problem_8.o

# Target to run the program (interactively)
run: problem_8
	./problem_8.exe

# Target to compile the object Test file
problem_8Test: problem_8Test.o
	g++ problem_8Test.o -o problem_8Test.exe

# Target to compile the C++ Test program
problem_8Test.o: problem_8Test.cpp
	g++ -c problem_8Test.cpp -o problem_8Test.o

# Target to run the Test program
test: problem_8Test
	./problem_8Test.exe

# Target to clean up compiled files
clean:
	rm -f problem_8.o problem_8Test.o problem_8.exe problem_8Test.exe
