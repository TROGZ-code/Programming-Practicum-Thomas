# Target to compile the object file
problem_1: problem_1.o
	g++ problem_1.o -o problem_1.exe

# Target to compile the C++ program
problem_1.o: problem_1.cpp
	g++ -c problem_1.cpp -o problem_1.o

# Target to run the program (interactively)
run: problem_1
	./problem_1.exe

# Target to compile the object Test file
problem_1Test: problem_1Test.o
	g++ problem_1Test.o -o problem_1Test.exe

# Target to compile the C++ Test program
problem_1Test.o: problem_1Test.cpp
	g++ -c problem_1Test.cpp -o problem_1Test.o

# Target to run the Test program
test: problem_1Test
	./problem_1Test.exe

# Target to clean up compiled files
clean:
	rm -f problem_1.o problem_1Test.o problem_1.exe problem_1Test.exe
