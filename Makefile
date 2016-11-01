#Projekt: Darbase
#
CPP = /usr/bin/g++
OBJ = main.o file.o
BIN = darbase

$(BIN): $(OBJ)
	$(CPP) $(OBJ) -o $(BIN)
main.o: main.cpp
	$(CPP) -c main.cpp -o main.o
file.o: main.cpp
	$(CPP) -c file.cpp -o file.o
clean: 
	rm -f $(OBJ) $(BIN)
