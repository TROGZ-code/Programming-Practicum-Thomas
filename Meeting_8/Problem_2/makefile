# Target to compile the object file
problem_2: problem_2.o
	g++ problem_2.o -o problem_2.exe

# Target to compile the C++ program
problem_2.o: problem_2.cpp
	g++ -c problem_2.cpp -o problem_2.o

# Target to run the program (interactively)
run: problem_2
	./problem_2.exe

# Target to compile the object Test file
problem_2Test: problem_2Test.o
	g++ problem_2Test.o -o problem_2Test.exe

# Target to compile the C++ Test program
problem_2Test.o: problem_2Test.cpp
	g++ -c problem_2Test.cpp -o problem_2Test.o

# Target to run the Test program
test: problem_2Test
	./problem_2Test.exe

# Target to clean up compiled files
clean:
	rm -f problem_2.o problem_2Test.o problem_2.exe problem_2Test.exe
