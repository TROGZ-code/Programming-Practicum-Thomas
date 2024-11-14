# Target to compile the object file
problem_3: problem_3.o
	g++ problem_3.o -o problem_3.exe

# Target to compile the C++ program
problem_3.o: problem_3.cpp
	g++ -c problem_3.cpp -o problem_3.o

# Target to run the program (interactively)
run: problem_3
	./problem_3.exe

# Target to compile the object Test file
problem_3Test: problem_3Test.o
	g++ problem_3Test.o -o problem_3Test.exe

# Target to compile the C++ Test program
problem_3Test.o: problem_3Test.cpp
	g++ -c problem_3Test.cpp -o problem_3Test.o

# Target to run the Test program
test: problem_3Test
	./problem_3Test.exe

# Target to clean up compiled files
clean:
	rm -f problem_3.o problem_3Test.o problem_3.exe problem_3Test.exe
