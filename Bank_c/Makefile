CC:= gcc 

Source_file := main

OBJ_REMOVE := $(wildcard *.o)

main:main.o
	$(CC) $(CFLAG_OUT) $(Source_file) main.o
	@make install --no-print-directory

main.o:main.c
	$(CC) $(CFLAG_OBJ) main.c

install:
	@printf "Installing a Source Code\n"
	@printf "Usage : make run\n"
	@make clean --no-print-directory

run:
	@./main 
clean:
	rm -rf $(OBJ_REMOVE)

CFLAG_OUT =  -o 
CFLAG_OBJ = -c



