#Projekt: Darbase
#
CPP = g++
OBJ = main.o base.o file.o menu.o
CPFLAGS = -Wall -O3
BIN = darbase

$(BIN): $(OBJ)
	$(CPP) $(OBJ) -o $(BIN)
main.o: main.cpp
	$(CPP) $(CPFLAGS) -c main.cpp -o main.o
base.o: base.cpp
	$(CPP) $(CPFLAGS) -c base.cpp -o base.o
file.o: main.cpp
	$(CPP) $(CPFLAGS) -c file.cpp -o file.o
menu.o: menu.cpp
	$(CPP) $(CPFLAGS) -c menu.cpp -o menu.o
clean: 
	rm -f $(OBJ) $(BIN)
