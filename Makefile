build:
	@gcc rat.c -o rat
run:
	make build && ./rat $(file)
