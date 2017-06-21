INC_DIR = include
SRC_DIR = src
OBJ_DIR = build
LIB_DIR = lib
BIN_DIR = bin

CC		= g++ 
CFLAGS	= -Wall -pedantic -std=c++11 -ansi -I. -I$(INC_DIR)
ARCHIVE = ar

linux: lael.a lael.so prog_estatico prog_dinamico 

windows: lael.lib lael.dll prog_estatico.exe prog_dinamico.exe

lael.a: $(SRC_DIR)/lael.cpp $(INC_DIR)/buscaseq.h $(INC_DIR)/buscabin.h $(INC_DIR)/selectionsort.h $(INC_DIR)/insertionsort.h $(INC_DIR)/quicksort.h $(INC_DIR)/mergesort.h $(INC_DIR)/lista.h $(INC_DIR)/bubblesort.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/lael.cpp -o $(OBJ_DIR)/lael.o
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/lael.o
	@echo "+++[Biblioteca estatica criada em $(LIB_DIR)/$@] +++"
lael.so: $(SRC_DIR)/lael.cpp $(INC_DIR)/buscaseq.h $(INC_DIR)/buscabin.h $(INC_DIR)/selectionsort.h $(INC_DIR)/insertionsort.h $(INC_DIR)/quicksort.h $(INC_DIR)/mergesort.h $(INC_DIR)/lista.h $(INC_DIR)/bubblesort.h
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/lael.cpp -o $(OBJ_DIR)/lael.o
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/lael.o
	@echo "+++[Biblioteca dinamica criada em $(LIB_DIR)/$@] +++"

prog_estatico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/lael.a -o $(OBJ_DIR)/$@

prog_dinamico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/lael.so -o $(OBJ_DIR)/$@

lael.lib:$(SRC_DIR)/lael.cpp $(INC_DIR)/buscaseq.h $(INC_DIR)/buscabin.h $(INC_DIR)/selectionsort.h $(INC_DIR)/insertionsort.h $(INC_DIR)/quicksort.h $(INC_DIR)/mergesort.h $(INC_DIR)/lista.h $(INC_DIR)/bubblesort.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/lael.cpp -o $(OBJ_DIR)/lael.o
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/lael.o
	@echo "+++[Biblioteca estatica criada em $(LIB_DIR)/$@] +++"
lael.dll:$(SRC_DIR)/lael.cpp $(INC_DIR)/buscaseq.h $(INC_DIR)/buscabin.h $(INC_DIR)/selectionsort.h $(INC_DIR)/insertionsort.h $(INC_DIR)/quicksort.h $(INC_DIR)/mergesort.h $(INC_DIR)/lista.h $(INC_DIR)/bubblesort.h
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/lael.cpp -o $(OBJ_DIR)/lael.o
	$(CC) -shared -o $(LIB_DIR)/$@ $(OBJ_DIR)/lael.o
	@echo "+++[Biblioteca dinamica criada em $(LIB_DIR)/$@] +++"

prog_estatico.exe:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/lael.lib -o $(OBJ_DIR)/$@

prog_dinamico.exe:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/lael.dll -o $(OBJ_DIR)/$@

doxy:
	doxygen -g

doc:
	$(RM) $(DOC_DIR)/*
	doxygen

clean:
	@rm -rf $(OBJ_DIR)/*