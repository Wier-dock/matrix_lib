CC=gcc
FLAGS= -Wall -Werror -Wextra -W

all: build

build: clean create_dir src/code headers/matrix.h
	$(CC) $(FLAGS) src/code headers/matrix.h -o ./build/app

style: src/code/main.c headers/matrix.h 
	clang-format -i src/code headers/matrix.h 

create_dir: 
	mkdir -p build

clean: 
	rm -rf build
