CC := clang

OPT_LVL := -O2

DEPS = ./deps

C_FLAGS := -ansi $(OPT_LVL) -I$(DEPS) -Wall


all: build_test run_test

run_test:
	./test/main

build_test:
	$(CC) $(C_FLAGS) ./test/main.c -o ./test/main

clean:
	$(RM) ./test/main **/*.o **/*~
	$(RM) -rf deps
