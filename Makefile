flags = -g3 -O0 -Wall -Werror

./bin/board : ./build/main.o ./build/chess.o
	gcc $(flags) -o ./bin/board ./build/main.o ./build/chess.o -lm

./build/main.o : ./src/main.c ./src/chess.h
	gcc $(flags) -o ./build/main.o -c ./src/main.c

./build/chess.o :./src/chess.c ./src/chess.h
	gcc $(flags) -o ./build/chess.o -c ./src/chess.c


.PHONY: clean adddir open gdb
adddir :
	mkdir build bin
clean :
	rm -rf ./build/ ./bin/
open :
	./bin/board
gdb :
	gdb ./bin/board
