.PHONY: all clean

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = ./bin/executable
CC = g++
FLAGS = -IC:\SDL\i686-w64-mingw32\include -LC:\SDL\i686-w64-mingw32\lib -w -lmingw32 -lSDL2main -lSDL2
WEIRD_FLAGS = -Wl,-subsystem,windows

#This is the target that compiles our executable
all: main

main: class
	$(CC) .\code\main.cpp .\lib\class.o $(FLAGS) -o $(OBJ_NAME)

class:
	$(CC) .\code\class.cpp -c -o .\lib\class.o

clean:
	del /f .\bin\executable.exe