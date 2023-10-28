all:
	clang -I ./inc -c src/main.c src/database.c
	mv main.o build
	mv database.o build
	clang -o build/system build/main.o build/database.o
clean:
	rm -rf build/*
