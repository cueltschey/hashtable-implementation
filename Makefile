all: compile run clean

compile:
	g++ main.cpp HashTable.h HashTable.cpp -o main.out

run:
	./main.out

clean:
	rm -rf ./*.out


