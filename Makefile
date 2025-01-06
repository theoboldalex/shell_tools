build:
	@gcc rat.c -o bin/rat
run:
	make build && ./bin/rat $(file)
