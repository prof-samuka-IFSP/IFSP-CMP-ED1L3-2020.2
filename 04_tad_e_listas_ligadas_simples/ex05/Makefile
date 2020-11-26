

all:
	gcc -c ./src/IntVector.c -I ./include -o obj/IntVector.o
	gcc apps/testIntVector.c ./obj/* -I ./include -o bin/testIntVector

run:
	./bin/testIntVector

clean:
	rm ./bin/* ./obj/*
