#Projekt: Darbase
#
CPP = g++
OBJ = main.o base.o file.o menu.o
BIN = darbase

$(BIN): $(OBJ)
	$(CPP) $(OBJ) -o $(BIN)
main.o: main.cpp
	$(CPP) -c main.cpp -o main.o
base.o: base.cpp
	$(CPP) -c base.cpp -o base.o
file.o: main.cpp
	$(CPP) -c file.cpp -o file.o
menu.o: menu.cpp
	$(CPP) -c menu.cpp -o menu.o
clean: 
	rm -f $(OBJ) $(BIN)
