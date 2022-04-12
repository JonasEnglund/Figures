all:
	clang++ -lGL -lglut -lGLU main.cpp square.cpp -o a
run: all
	./a
