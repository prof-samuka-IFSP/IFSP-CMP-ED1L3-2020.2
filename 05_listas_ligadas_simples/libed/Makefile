APPS    = ./apps
BIN     = ./bin
INCLUDE = ./include
LIB     = ./lib
OBJ     = ./obj
SRC     = ./src

FLAGS = -O3 -Wall
LIBS  = -led -lm -L $(LIB)

all: libed app
	

libed: \
	$(OBJ)/Time.o \
	$(OBJ)/IntVector.o \
	$(OBJ)/LinkedList.o
	ar -rcs $(LIB)/libed.a $(OBJ)/*.o


app: clean_apps \
	$(BIN)/testIntVector \
	$(BIN)/testLinkedList \
	$(BIN)/testStressAddLast


$(OBJ)/%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc $(FLAGS) -c $< -I $(INCLUDE) -o $@


$(BIN)/%: $(APPS)/%.c
	gcc $(FLAGS) $< -I $(INCLUDE) $(LIBS) -o $@



run:
	$(BIN)/testLinkedList


clean:
	rm -rf $(OBJ)/*.o
	rm -rf $(BIN)/*
	rm -rf $(LIB)/*

clean_apps:
	rm -rf $(BIN)/*
