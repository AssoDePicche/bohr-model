default: compile run

compile:
	gcc -Wall ./src/main.c -o ./src/main.exe

run:
	./src/main.exe

clean:
	rm -f ./src/*.exe
